#using <System.Runtime.Remoting.dll>
#using <System.dll>
#using <Counter.dll>

using namespace System;
using namespace System::Runtime::Remoting;
using namespace System::Runtime::Remoting::Channels;
using namespace System::Runtime::Remoting::Channels::Ipc;

public ref class Client
{
public:
   void ClientTest()
   {
      IpcClientChannel^ clientChannel = gcnew IpcClientChannel;
      ChannelServices::RegisterChannel( clientChannel );

      RemotingConfiguration::RegisterWellKnownClientType( Counter::typeid, L"ipc://remote/counter" );
      Counter^ counter = gcnew Counter;
      Console::WriteLine( L"This is call number {0}.", counter->Count );
   }
};

int main()
{
   Client^ c = gcnew Client;
   c->ClientTest();
}
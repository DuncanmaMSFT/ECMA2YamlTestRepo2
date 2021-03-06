#using <System.dll>

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Specialized;
void PrintKeysAndValues( StringDictionary^ myCol )
{
   Console::WriteLine( "   KEY        VALUE" );
   IEnumerator^ enum0 = myCol->GetEnumerator();
   while ( enum0->MoveNext() )
   {
      DictionaryEntry^ de = safe_cast<DictionaryEntry^>(enum0->Current);
      Console::WriteLine( "   {0,-10} {1}", de->Key, de->Value );
   }

   Console::WriteLine();
}

int main()
{
   
   // Creates and initializes a new StringDictionary.
   StringDictionary^ myCol = gcnew StringDictionary;
   myCol->Add( "red", "rojo" );
   myCol->Add( "green", "verde" );
   myCol->Add( "blue", "azul" );
   
   // Displays the values in the StringDictionary.
   Console::WriteLine( "Initial contents of the StringDictionary:" );
   PrintKeysAndValues( myCol );
   
   // Searches for a key.
   if ( myCol->ContainsKey( "red" ) )
      Console::WriteLine( "The collection contains the key \"red\"." );
   else
      Console::WriteLine( "The collection does not contain the key \"red\"." );

   Console::WriteLine();
   
   // Searches for a value.
   if ( myCol->ContainsValue( "amarillo" ) )
      Console::WriteLine( "The collection contains the value \"amarillo\"." );
   else
      Console::WriteLine( "The collection does not contain the value \"amarillo\"." );

   Console::WriteLine();
}

/*
This code produces the following output.

Initial contents of the StringDictionary:
   KEY        VALUE
   green      verde
   red        rojo
   blue       azul

The collection contains the key "red".

The collection does not contain the value "amarillo".

*/
private void Control1_PreviewKeyDown(Object sender, PreviewKeyDownEventArgs e) {

System.Text.StringBuilder messageBoxCS = new System.Text.StringBuilder();
messageBoxCS.AppendFormat("{0} = {1}", "Alt", e.Alt );
messageBoxCS.AppendLine();
messageBoxCS.AppendFormat("{0} = {1}", "Control", e.Control );
messageBoxCS.AppendLine();
messageBoxCS.AppendFormat("{0} = {1}", "KeyCode", e.KeyCode );
messageBoxCS.AppendLine();
messageBoxCS.AppendFormat("{0} = {1}", "KeyValue", e.KeyValue );
messageBoxCS.AppendLine();
messageBoxCS.AppendFormat("{0} = {1}", "KeyData", e.KeyData );
messageBoxCS.AppendLine();
messageBoxCS.AppendFormat("{0} = {1}", "Modifiers", e.Modifiers );
messageBoxCS.AppendLine();
messageBoxCS.AppendFormat("{0} = {1}", "Shift", e.Shift );
messageBoxCS.AppendLine();
messageBoxCS.AppendFormat("{0} = {1}", "IsInputKey", e.IsInputKey );
messageBoxCS.AppendLine();
MessageBox.Show(messageBoxCS.ToString(), "PreviewKeyDown Event" );
}
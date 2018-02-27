string input = "AXBYCZ"; 
StringBuilder output = new StringBuilder();
char[] char = input.ToCharArray();
for (int i = 0; i < char.Length; i++)
{
 if (i % 2 == 0)
 {
 if((i+1) < char.Length 
 {
  output.Append(char[i + 1]);
 }
 output.Append(char[i]);
 }
 }

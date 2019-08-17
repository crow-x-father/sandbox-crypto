//-//////////////////////////////////////////////////////////////////////////-//
// XOR based encryption and decryption
//-//////////////////////////////////////////////////////////////////////////-//
// @author         : Crow Father (@crow-x-father)
// @email          : crow.x.father@protonmail.com
// @date           : 18-AUG-2019
//-//////////////////////////////////////////////////////////////////////////-//

#include <iostream>
#include <string>

using namespace std;

char key = 'x';

int main()
{
  // Plain text
  string p;

  // Encrypted text
  string e;

  // Decrypted text
  string d;

  // Insert the string
  getline(cin,p);

  // Encrypt text
  e = p;
  for(auto& x : e)
    x ^= key;

  // Decrypt text
  d = e;
  for(auto& x : d)
    x ^= key;

  // Print results
  cout << " Plain text       : "<< p << endl;
  cout << " Encrypted text   : "<< e << endl;
  cout << " Decrypted text   : "<< d << endl;

  return 0;
}



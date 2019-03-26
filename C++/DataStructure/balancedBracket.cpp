#include<iostream>
#include<stack>
#include<string>

std::string isBalanced(std::string s) {
bool isBalanced = false;
  std::stack<char> x;
  char a;

	for (int i = 0; i < s.length(); i++) {

		if (s[i] == '[' || s[i] == '(' || s[i] == '{') {
			x.push(s[i]);
			printf("'%c' pos: [%d] pushed to stacks\n", s[i], i);
			continue;
		}

		/* Evaluate closed bracket */
		// make sure not evaluate empty stack.
		if (x.empty() == true) {
			return "NO";
		}

		
		if (s[i] == ')') {
			a = x.top(); // check at top of stack

			if (a == '(') {
			// if match then pop and evaluate next stack 
			x.pop();
			continue;
			} else {
			// if not match, stop the loop 
			break;
			}
		} else if (s[i] == '}') {
			a = x.top();

			if (a == '{') {
			x.pop();
			continue;
			} else {
			break;
			}
		} else if (s[i] == ']') {
			a = x.top();

			if (a == '[') {
			x.pop();
			continue;
			} else {
			break;
			}
		} else {
			// error handling 
			std::cout << 'Evaluation not match  : ' << s[i] << std::endl;
			break;
		}
	}

	// Final evaluation: IF any element still remain, then it's not balanced.
	if (x.empty() == true) {
		isBalanced = true;
	}

  return isBalanced ? "YES" : "NO";
}

int main () {
	std::string input = "{([{})}";  			//test case 1 : YES
	std::string input2 = "{(([])[])[]]}";	//test case 2 : NO

	std::cout << isBalanced(input2) << std::endl;

	return 0;
}
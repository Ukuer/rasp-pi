# Here is the grammer of calculator

program:

		end

		expr_list end

expr\_list:
		
		expression print

		expression print expr_list

expression:

		expression + term

		expression - term

		term

term:   

		term / primary 

		term * primary

		primary

primary:

		number
		name
		name = expression
		- primary
		(expression)


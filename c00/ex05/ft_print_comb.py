def ft_print_comb():
	liste=[0,1,2,3,4,5,6,7,8,9]
	for i in liste:
		for i2 in liste:
			if i2 != i:
				for i3 in liste:
					if i3!= i and i2:
						print(i,i2,i3)
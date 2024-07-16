# 42-Exams

P	1	first_word		‘\0’	Y	write;ret
P	2	fizzbuzz		nbr	Y	write_n & \n
F	3	ft_strcpy		‘\0'	Y+	->s2 s1<+’\0’
F	4	ft_strlen		‘\0’	Y	—
F	5	ft_swap			*p	Y	*tmp
F	6	ft_putstr		‘\0’	Y	—
P	7	repeat_alpha		‘\0’	Y	s[i] - ‘a’
P	8	rev_print		len	Y	—
P	9	rot_13			‘\0’	Y	a-m + / z-n -
P	10	rotone			‘\0’	Y	b-z - / a +25
P	11	search_and_replace	‘\0’	Y	*s=in / wrte out
P	12	ulstr			‘\0’	Y	a-z-32 A-Z+32

P	1	alpha_mirror		‘\0’	Y	
P	2	camel_to_snake		'\0’	Y	
F	3	do_op			prif	Y+	
F	4	ft_atoi			*str	Y	
F	5	ft_strcmp		‘\0’	Y	
F	6	ft_strcspn		‘\0’	Y	
P	7	ft_strdup		‘\0’	Y	
P	8	ft_strpbrk		*str	Y	
P	9	ft_strrev		len	Y	
P	10	ft_strspn		‘\0’	Y	
P	11	inter			*str	Y	
P	12	is_power_of_2		bit	Y	
	13	last_word		‘\0’		
	14	max			len	Y	Uint/len res/tab
F	15	print_bits		bit	Y	(octet >> i & 1) + '0'
	16	reverse_bits		bit	Y+	res * 2 + (octet % 2)
	17	snake_to_camel		‘\0’	Y	“_” = i++; s[i] -32
	18	swap_bits		bit	Y	(oc >> 4) | (oc << 4)
	19	union			*str	Y	Sav writ s++
	20	wdmatch			‘\0'	Y	 j++ i ++

P	1	add_prime_sum			Y	
P	2	epur_str		‘\0’	Y	
F	3	expand_str		‘\0’	Y++	
F	4	ft_atoi_base			Y	
F	5	ft_list_size		t_l	Y	t_l = 0 || t_l->n
P	6	ft_range			Y	
P	7	ft_rrange			Y	
P	8	hidenp			‘\0’	Y	
P	9	lcm				Y	
P	10	paramsum		ac	Y	write_n arc
P	11	pgcd				Y	
P	12	print_hex		nbr	Y	write_n 16
P	13	rstr_capitalizer	'\0’		A->a | a+1
P	14	str_capitalizer		‘\0’		
P	15	tab_mult			

F	1	flood_fill		X	R	ff -> fill > X r fill
P	2	fprime				Y	
F	3	ft_itoa				Y	
F	4	ft_list_foreach			Y	
F	5	ft_list_remove_if			
F	6	ft_split			
P	7	rev_wstr			
P	8	rostring			
P	9	sort_int_tab			
P	10	sort_list			

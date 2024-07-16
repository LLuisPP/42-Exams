# 42-Exams

| lvl | n⁰ | Type | name | operate | ub | tactic |
|:---|---|:---|:---|:---|:---|---|
|0|1|Prog| `first_word` | ‘\0’ | Y | write;ret |
|0|2|Prog| `fizzbuzz` | nbr | Y | write_n & \n |
|0|3|Func| `ft_strcpy` | ‘\0’ | Y+ | ->s2 s1<+’\0’ |
|0|4|Func| `ft_strlen` | ‘\0’ | Y | -- |
|0|5|Func| `ft_swap` | *p | Y | *tmp |
|0|6|Func| `ft_putstr` | ‘\0’ | Y | -- |
|0|7|Prog| `repeat_alpha` | ‘\0’ | Y | s[i] - ‘a’ |
|0|8|Prog| `rev_print` | len | Y | -- |
|0|9|Prog| `rot_13` | ‘\0’ | Y | a-m + / z-n - |
|0|10|Prog| `rotone` | ‘\0’ | Y | b-z - / a +25 |
|0|11|Prog| `search_and_replace` | ‘\0’ | Y | *s=in / wrte out |
|0|12|Prog| `ulstr` | ‘\0’ | Y | a-z-32 A-Z+32 |
||||||||
|1|1|Prog| `alpha_mirror` | ‘\0’ | Y |  |
|1|2|Prog| `camel_to_snake` | ‘\0’ | Y+ |  |
|1|3|Prog| `do_op` | ‘\0’ | Y+ |  |
|1|4|Func| `ft_atoi` | ‘\0’ | Y |  |
|1|5|Func| `ft_strcmp` | ‘\0’ | Y |  |
|1|6|Func| `ft_strcspn` | ‘\0’ | Y |  |
|1|7|Func| `ft_strdup` | ‘\0’ | Y+ | malloc + cpy'\0' |
|1|8|Func| `ft_strpbrk` | len | Y |  |
|1|9|Func| `ft_strrev` | ‘\0’ | Y |  |
|1|10|Func| `ft_strspn` | *s | Y |  |
|1|11|Prog| `inter` | *s | Y |  |
|1|12|Func| `is_power_of_2` | nbr | Y |  |
|1|13|Prog| `last_word` | ‘\0’ | Y |  |
|1|14|Func| `max` | ‘\0’ | Y | Uint/len res/tab |
|1|15|Func| `print_bits` | i | Y | (octet >> i & 1) + '0' |
|1|16|Func| `reverse_bits` | i | Y | res * 2 + (octet % 2) |
|1|17|Prog| `snake_to_camel` | ‘\0’ | Y | “_” = i++; s[i] -32 |
|1|18|Func| `swap_bits` | >> | Y | (oc >> 4) | (oc << 4) |
|1|19|Prog| `union` | *s*s | Y | Sav writ s++ |
|1|20|Prog| `wdmatch` | ‘\0’ | Y+ | j++ i ++ |
||||||||

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

function
eval_for(p1)
{
	var j, k, p2, p3;

	p2 = cadr(p1);
	if (!isusersymbol(p2))
		stopf("for: symbol error");

	push(caddr(p1));
	evalf();
	j = pop_integer();

	push(cadddr(p1));
	evalf();
	k = pop_integer();

	p1 = cddddr(p1);

	save_symbol(p2);

	for (;;) {
		push_integer(j);
		p3 = pop();
		set_symbol(p2, p3, symbol(NIL));
		p3 = p1;
		while (iscons(p3)) {
			push(car(p3));
			evalf();
			pop();
			p3 = cdr(p3);
		}
		if (j == k)
			break;
		if (j < k)
			j++;
		else
			j--;
	}

	restore_symbol();

	push_symbol(NIL); // return value
}

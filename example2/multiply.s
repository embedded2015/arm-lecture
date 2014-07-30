	.text
	.global multiply
multiply:
	mul R0, R1, R0
	bx lr
	nop
	.type multiply, function
	.size multipy, .-multiply

	.global multiplyadd
multiplyadd:
	mla r0, r0, r1, r2
	bx lr
	nop
	.type multiplyadd, function
	.size multiplyadd, .-multiplyadd
	
	.global multiplysub
multiplysub:
	mls r0, r0, r1, r2
	bx lr
	nop
	.type multiplysub, function
	.size multiplysub, .-multiplysub
	.end

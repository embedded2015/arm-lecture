.text
_start: .global _start

@ sys_write ( fd, pstr, len)
	@ r7=4 r0 r1 r2
	mov r0, #1 @ fd <- stdout
	adr r1, msg @ pstr <- *msg
	mov r2, #14 @ len <- 14
	mov r7, #4 @ syscall <- sys_write
	swi 0 @ system call

@ sys_exit ( exitcode )
	@ r7=1 r0
	mov r0, #0 @ exitcode <- 0
	mov r7, #1 @ syscall <- sys_exit
	swi 0 @ system call

msg:
	.asciz "Hello, world!\n"
	.end

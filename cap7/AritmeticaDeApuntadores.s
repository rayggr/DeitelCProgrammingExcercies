	.file	"AritmeticaDeApuntadores.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "Arreglo b impreso con:\12Notacion de subindices de arreglos\0"
LC1:
	.ascii "b[%d] = %d\12\0"
	.align 4
LC2:
	.ascii "\12Notacion apuntador/desplazamiento donde\12el apuntador es el nombre del arreglo\0"
LC3:
	.ascii "*(b + %d ) = %d\12\0"
	.align 4
LC4:
	.ascii "\12Notacion de subindices de arreglos\0"
LC5:
	.ascii "ptrB [%d] = %d\12\0"
	.align 4
LC6:
	.ascii "\12Notacion aputnador desplazamiento\0"
LC7:
	.ascii "*(ptrB + %d ) = %d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$64, %esp
	call	___main
	movl	$10, 28(%esp)
	movl	$20, 32(%esp)
	movl	$30, 36(%esp)
	movl	$40, 40(%esp)
	movl	$50, 44(%esp)
	movl	$60, 48(%esp)
	leal	28(%esp), %eax
	movl	%eax, 52(%esp)
	movl	$LC0, (%esp)
	call	_puts
	movl	$0, 60(%esp)
	jmp	L2
L3:
	movl	60(%esp), %eax
	movl	28(%esp,%eax,4), %eax
	movl	%eax, 8(%esp)
	movl	60(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	addl	$1, 60(%esp)
L2:
	cmpl	$5, 60(%esp)
	jle	L3
	movl	$LC2, (%esp)
	call	_puts
	movl	$0, 56(%esp)
	jmp	L4
L5:
	movl	56(%esp), %eax
	leal	0(,%eax,4), %edx
	leal	28(%esp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, 8(%esp)
	movl	56(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	addl	$1, 56(%esp)
L4:
	cmpl	$5, 56(%esp)
	jle	L5
	movl	$LC4, (%esp)
	call	_puts
	movl	$0, 60(%esp)
	jmp	L6
L7:
	movl	60(%esp), %eax
	leal	0(,%eax,4), %edx
	movl	52(%esp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, 8(%esp)
	movl	60(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	addl	$1, 60(%esp)
L6:
	cmpl	$5, 60(%esp)
	jle	L7
	movl	$LC6, (%esp)
	call	_puts
	movl	$0, 56(%esp)
	jmp	L8
L9:
	movl	56(%esp), %eax
	leal	0(,%eax,4), %edx
	movl	52(%esp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, 8(%esp)
	movl	56(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC7, (%esp)
	call	_printf
	addl	$1, 56(%esp)
L8:
	cmpl	$5, 56(%esp)
	jle	L9
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef

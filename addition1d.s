	.file	"addition1d.c"
	.section	.rodata
.LC0:
	.string	"enter elements of a array"
.LC1:
	.string	"%d"
.LC2:
	.string	"enter elements of b array"
.LC3:
	.string	"addition of two array"
.LC4:
	.string	"%d\t"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$.LC0, %edi
	call	puts
	movl	$0, -68(%rbp)
	jmp	.L2
.L3:
	leaq	-64(%rbp), %rax
	movl	-68(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	addl	$1, -68(%rbp)
.L2:
	cmpl	$2, -68(%rbp)
	jle	.L3
	movl	$.LC2, %edi
	call	puts
	movl	$0, -68(%rbp)
	jmp	.L4
.L5:
	leaq	-48(%rbp), %rax
	movl	-68(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	addl	$1, -68(%rbp)
.L4:
	cmpl	$2, -68(%rbp)
	jle	.L5
	movl	$.LC3, %edi
	call	puts
	movl	$0, -68(%rbp)
	jmp	.L6
.L7:
	movl	-68(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %edx
	movl	-68(%rbp), %eax
	cltq
	movl	-48(%rbp,%rax,4), %eax
	addl	%eax, %edx
	movl	-68(%rbp), %eax
	cltq
	movl	%edx, -32(%rbp,%rax,4)
	movl	-68(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax,4), %eax
	movl	%eax, %esi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -68(%rbp)
.L6:
	cmpl	$2, -68(%rbp)
	jle	.L7
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L8
	call	__stack_chk_fail
.L8:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits

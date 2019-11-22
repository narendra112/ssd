	.file	"iso.c"
	.section	.rodata
.LC0:
	.string	"Equilateral"
.LC1:
	.string	"Isosceles"
.LC2:
	.string	"Scalene"
	.text
	.globl	triangle
	.type	triangle, @function
triangle:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jne	.L2
	movl	-8(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jne	.L2
	movl	-4(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jne	.L2
	movl	$.LC0, %edi
	call	puts
	jmp	.L3
.L2:
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	je	.L4
	movl	-8(%rbp), %eax
	cmpl	-12(%rbp), %eax
	je	.L4
	movl	-4(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jne	.L5
.L4:
	movl	$.LC1, %edi
	call	puts
	jmp	.L3
.L5:
	movl	$.LC2, %edi
	call	puts
.L3:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	triangle, .-triangle
	.section	.rodata
.LC3:
	.string	"Enter 3 values"
.LC4:
	.string	"%d%d%d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$.LC3, %edi
	call	puts
	leaq	-12(%rbp), %rcx
	leaq	-16(%rbp), %rdx
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	-12(%rbp), %edx
	movl	-16(%rbp), %ecx
	movl	-20(%rbp), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	triangle
	movl	$0, %eax
	movq	-8(%rbp), %rsi
	xorq	%fs:40, %rsi
	je	.L8
	call	__stack_chk_fail
.L8:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits

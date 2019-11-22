	.file	"search.c"
	.section	.rodata
.LC0:
	.string	"Enter array size"
.LC1:
	.string	"%d"
.LC2:
	.string	"Enter elements of array"
.LC3:
	.string	"Enter key to search"
.LC4:
	.string	"%d is found\n"
.LC5:
	.string	"%d not found\n"
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
	subq	$432, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -420(%rbp)
	movl	$.LC0, %edi
	call	puts
	leaq	-432(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	$.LC2, %edi
	call	puts
	movl	$0, -424(%rbp)
	jmp	.L2
.L3:
	leaq	-416(%rbp), %rax
	movl	-424(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	addl	$1, -424(%rbp)
.L2:
	movl	-432(%rbp), %eax
	cmpl	%eax, -424(%rbp)
	jl	.L3
	movl	$.LC3, %edi
	call	puts
	leaq	-428(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	$0, -424(%rbp)
	jmp	.L4
.L7:
	movl	-424(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	-428(%rbp), %eax
	cmpl	%eax, %edx
	jne	.L5
	movl	$1, -420(%rbp)
	jmp	.L6
.L5:
	addl	$1, -424(%rbp)
.L4:
	movl	-432(%rbp), %eax
	cmpl	%eax, -424(%rbp)
	jl	.L7
.L6:
	cmpl	$1, -420(%rbp)
	jne	.L8
	movl	-428(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	jmp	.L11
.L8:
	movl	-428(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
.L11:
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L10
	call	__stack_chk_fail
.L10:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits

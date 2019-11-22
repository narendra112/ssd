	.file	"sort.c"
	.section	.rodata
.LC0:
	.string	"Enter array size"
.LC1:
	.string	"%d"
.LC2:
	.string	"Enter elements of array:"
.LC3:
	.string	"After sorting arrays are"
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
	subq	$432, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$.LC0, %edi
	call	puts
	leaq	-432(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	$.LC2, %edi
	call	puts
	movl	$0, -428(%rbp)
	jmp	.L2
.L3:
	leaq	-416(%rbp), %rax
	movl	-428(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	addl	$1, -428(%rbp)
.L2:
	movl	-432(%rbp), %eax
	cmpl	%eax, -428(%rbp)
	jl	.L3
	movl	$1, -428(%rbp)
	jmp	.L4
.L8:
	movl	$0, -424(%rbp)
	jmp	.L5
.L7:
	movl	-424(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	-424(%rbp), %eax
	addl	$1, %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	cmpl	%eax, %edx
	jle	.L6
	movl	-424(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	movl	%eax, -420(%rbp)
	movl	-424(%rbp), %eax
	addl	$1, %eax
	cltq
	movl	-416(%rbp,%rax,4), %edx
	movl	-424(%rbp), %eax
	cltq
	movl	%edx, -416(%rbp,%rax,4)
	movl	-424(%rbp), %eax
	addl	$1, %eax
	cltq
	movl	-420(%rbp), %edx
	movl	%edx, -416(%rbp,%rax,4)
.L6:
	addl	$1, -424(%rbp)
.L5:
	movl	-432(%rbp), %eax
	subl	-428(%rbp), %eax
	cmpl	-424(%rbp), %eax
	jg	.L7
	addl	$1, -428(%rbp)
.L4:
	movl	-432(%rbp), %eax
	cmpl	%eax, -428(%rbp)
	jl	.L8
	movl	$.LC3, %edi
	call	puts
	movl	$0, -428(%rbp)
	jmp	.L9
.L10:
	movl	-428(%rbp), %eax
	cltq
	movl	-416(%rbp,%rax,4), %eax
	movl	%eax, %esi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -428(%rbp)
.L9:
	movl	-432(%rbp), %eax
	cmpl	%eax, -428(%rbp)
	jl	.L10
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L11
	call	__stack_chk_fail
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits


sastantua:	file format Mach-O 64-bit x86-64

Disassembly of section __TEXT,__text:
__text:
100000aa2:	55 	pushq	%rbp
100000aa3:	48 89 e5 	movq	%rsp, %rbp
100000aa6:	48 83 ec 10 	subq	$16, %rsp
100000aaa:	89 f8 	movl	%edi, %eax
100000aac:	88 45 fc 	movb	%al, -4(%rbp)
100000aaf:	48 8d 45 fc 	leaq	-4(%rbp), %rax
100000ab3:	ba 01 00 00 00 	movl	$1, %edx
100000ab8:	48 89 c6 	movq	%rax, %rsi
100000abb:	bf 01 00 00 00 	movl	$1, %edi
100000ac0:	e8 41 03 00 00 	callq	833
100000ac5:	c9 	leave
100000ac6:	c3 	retq
100000ac7:	55 	pushq	%rbp
100000ac8:	48 89 e5 	movq	%rsp, %rbp
100000acb:	48 83 ec 10 	subq	$16, %rsp
100000acf:	89 7d fc 	movl	%edi, -4(%rbp)
100000ad2:	48 89 75 f0 	movq	%rsi, -16(%rbp)
100000ad6:	83 7d fc 02 	cmpl	$2, -4(%rbp)
100000ada:	75 1a 	jne	26 <_main+0x2F>
100000adc:	48 8b 45 f0 	movq	-16(%rbp), %rax
100000ae0:	48 83 c0 08 	addq	$8, %rax
100000ae4:	48 8b 00 	movq	(%rax), %rax
100000ae7:	48 89 c7 	movq	%rax, %rdi
100000aea:	e8 11 03 00 00 	callq	785
100000aef:	89 c7 	movl	%eax, %edi
100000af1:	e8 ca 02 00 00 	callq	714 <_sastantua>
100000af6:	b8 00 00 00 00 	movl	$0, %eax
100000afb:	c9 	leave
100000afc:	c3 	retq
100000afd:	55 	pushq	%rbp
100000afe:	48 89 e5 	movq	%rsp, %rbp
100000b01:	48 83 ec 10 	subq	$16, %rsp
100000b05:	89 f8 	movl	%edi, %eax
100000b07:	89 75 f8 	movl	%esi, -8(%rbp)
100000b0a:	88 45 fc 	movb	%al, -4(%rbp)
100000b0d:	eb 0f 	jmp	15 <_display_sequence+0x21>
100000b0f:	0f be 45 fc 	movsbl	-4(%rbp), %eax
100000b13:	89 c7 	movl	%eax, %edi
100000b15:	e8 88 ff ff ff 	callq	-120 <_ft_putchar>
100000b1a:	83 6d f8 01 	subl	$1, -8(%rbp)
100000b1e:	83 7d f8 00 	cmpl	$0, -8(%rbp)
100000b22:	7f eb 	jg	-21 <_display_sequence+0x12>
100000b24:	c9 	leave
100000b25:	c3 	retq
100000b26:	55 	pushq	%rbp
100000b27:	48 89 e5 	movq	%rsp, %rbp
100000b2a:	89 7d ec 	movl	%edi, -20(%rbp)
100000b2d:	89 75 e8 	movl	%esi, -24(%rbp)
100000b30:	c7 45 fc 03 00 00 00 	movl	$3, -4(%rbp)
100000b37:	c7 45 f8 00 00 00 00 	movl	$0, -8(%rbp)
100000b3e:	c7 45 f4 00 00 00 00 	movl	$0, -12(%rbp)
100000b45:	eb 31 	jmp	49 <_calc_width_top_floor+0x52>
100000b47:	8b 45 f8 	movl	-8(%rbp), %eax
100000b4a:	83 c0 03 	addl	$3, %eax
100000b4d:	89 45 f4 	movl	%eax, -12(%rbp)
100000b50:	eb 08 	jmp	8 <_calc_width_top_floor+0x34>
100000b52:	83 45 fc 02 	addl	$2, -4(%rbp)
100000b56:	83 6d f4 01 	subl	$1, -12(%rbp)
100000b5a:	83 7d f4 00 	cmpl	$0, -12(%rbp)
100000b5e:	7f f2 	jg	-14 <_calc_width_top_floor+0x2C>
100000b60:	8b 45 f8 	movl	-8(%rbp), %eax
100000b63:	89 c2 	movl	%eax, %edx
100000b65:	c1 ea 1f 	shrl	$31, %edx
100000b68:	01 d0 	addl	%edx, %eax
100000b6a:	d1 f8 	sarl	%eax
100000b6c:	83 c0 02 	addl	$2, %eax
100000b6f:	01 c0 	addl	%eax, %eax
100000b71:	01 45 fc 	addl	%eax, -4(%rbp)
100000b74:	83 45 f8 01 	addl	$1, -8(%rbp)
100000b78:	8b 45 e8 	movl	-24(%rbp), %eax
100000b7b:	2b 45 ec 	subl	-20(%rbp), %eax
100000b7e:	3b 45 f8 	cmpl	-8(%rbp), %eax
100000b81:	7f c4 	jg	-60 <_calc_width_top_floor+0x21>
100000b83:	8b 45 fc 	movl	-4(%rbp), %eax
100000b86:	5d 	popq	%rbp
100000b87:	c3 	retq
100000b88:	55 	pushq	%rbp
100000b89:	48 89 e5 	movq	%rsp, %rbp
100000b8c:	48 83 ec 18 	subq	$24, %rsp
100000b90:	89 7d ec 	movl	%edi, -20(%rbp)
100000b93:	89 75 e8 	movl	%esi, -24(%rbp)
100000b96:	8b 45 e8 	movl	-24(%rbp), %eax
100000b99:	89 c6 	movl	%eax, %esi
100000b9b:	bf 01 00 00 00 	movl	$1, %edi
100000ba0:	e8 81 ff ff ff 	callq	-127 <_calc_width_top_floor>
100000ba5:	8b 55 e8 	movl	-24(%rbp), %edx
100000ba8:	83 c2 01 	addl	$1, %edx
100000bab:	01 d2 	addl	%edx, %edx
100000bad:	01 d0 	addl	%edx, %eax
100000baf:	89 45 f0 	movl	%eax, -16(%rbp)
100000bb2:	8b 45 f0 	movl	-16(%rbp), %eax
100000bb5:	89 c2 	movl	%eax, %edx
100000bb7:	c1 ea 1f 	shrl	$31, %edx
100000bba:	01 d0 	addl	%edx, %eax
100000bbc:	d1 f8 	sarl	%eax
100000bbe:	83 e8 01 	subl	$1, %eax
100000bc1:	89 45 fc 	movl	%eax, -4(%rbp)
100000bc4:	c7 45 f8 00 00 00 00 	movl	$0, -8(%rbp)
100000bcb:	c7 45 f4 00 00 00 00 	movl	$0, -12(%rbp)
100000bd2:	eb 35 	jmp	53 <_calc_space_top_floot+0x81>
100000bd4:	8b 45 f8 	movl	-8(%rbp), %eax
100000bd7:	83 c0 03 	addl	$3, %eax
100000bda:	89 45 f4 	movl	%eax, -12(%rbp)
100000bdd:	eb 08 	jmp	8 <_calc_space_top_floot+0x5F>
100000bdf:	83 6d fc 01 	subl	$1, -4(%rbp)
100000be3:	83 6d f4 01 	subl	$1, -12(%rbp)
100000be7:	83 7d f4 00 	cmpl	$0, -12(%rbp)
100000beb:	7f f2 	jg	-14 <_calc_space_top_floot+0x57>
100000bed:	8b 45 f8 	movl	-8(%rbp), %eax
100000bf0:	89 c2 	movl	%eax, %edx
100000bf2:	c1 ea 1f 	shrl	$31, %edx
100000bf5:	01 d0 	addl	%edx, %eax
100000bf7:	d1 f8 	sarl	%eax
100000bf9:	ba fe ff ff ff 	movl	$4294967294, %edx
100000bfe:	29 c2 	subl	%eax, %edx
100000c00:	89 d0 	movl	%edx, %eax
100000c02:	01 45 fc 	addl	%eax, -4(%rbp)
100000c05:	83 45 f8 01 	addl	$1, -8(%rbp)
100000c09:	8b 45 e8 	movl	-24(%rbp), %eax
100000c0c:	2b 45 ec 	subl	-20(%rbp), %eax
100000c0f:	3b 45 f8 	cmpl	-8(%rbp), %eax
100000c12:	7f c0 	jg	-64 <_calc_space_top_floot+0x4C>
100000c14:	8b 45 fc 	movl	-4(%rbp), %eax
100000c17:	c9 	leave
100000c18:	c3 	retq
100000c19:	55 	pushq	%rbp
100000c1a:	48 89 e5 	movq	%rsp, %rbp
100000c1d:	48 83 ec 30 	subq	$48, %rsp
100000c21:	89 7d dc 	movl	%edi, -36(%rbp)
100000c24:	89 75 d8 	movl	%esi, -40(%rbp)
100000c27:	89 d0 	movl	%edx, %eax
100000c29:	88 45 d4 	movb	%al, -44(%rbp)
100000c2c:	8b 45 d8 	movl	-40(%rbp), %eax
100000c2f:	2b 45 dc 	subl	-36(%rbp), %eax
100000c32:	89 45 f0 	movl	%eax, -16(%rbp)
100000c35:	8b 45 f0 	movl	-16(%rbp), %eax
100000c38:	83 c0 03 	addl	$3, %eax
100000c3b:	89 45 ec 	movl	%eax, -20(%rbp)
100000c3e:	8b 55 d8 	movl	-40(%rbp), %edx
100000c41:	8b 45 dc 	movl	-36(%rbp), %eax
100000c44:	89 d6 	movl	%edx, %esi
100000c46:	89 c7 	movl	%eax, %edi
100000c48:	e8 3b ff ff ff 	callq	-197 <_calc_space_top_floot>
100000c4d:	89 45 fc 	movl	%eax, -4(%rbp)
100000c50:	8b 55 d8 	movl	-40(%rbp), %edx
100000c53:	8b 45 dc 	movl	-36(%rbp), %eax
100000c56:	89 d6 	movl	%edx, %esi
100000c58:	89 c7 	movl	%eax, %edi
100000c5a:	e8 c7 fe ff ff 	callq	-313 <_calc_width_top_floor>
100000c5f:	89 45 f8 	movl	%eax, -8(%rbp)
100000c62:	8b 45 d8 	movl	-40(%rbp), %eax
100000c65:	83 e0 01 	andl	$1, %eax
100000c68:	85 c0 	testl	%eax, %eax
100000c6a:	75 08 	jne	8 <_display_floor+0x5B>
100000c6c:	8b 45 d8 	movl	-40(%rbp), %eax
100000c6f:	83 e8 01 	subl	$1, %eax
100000c72:	eb 03 	jmp	3 <_display_floor+0x5E>
100000c74:	8b 45 d8 	movl	-40(%rbp), %eax
100000c77:	89 45 e8 	movl	%eax, -24(%rbp)
100000c7a:	c7 45 f4 00 00 00 00 	movl	$0, -12(%rbp)
100000c81:	e9 2c 01 00 00 	jmp	300 <_display_floor+0x199>
100000c86:	8b 45 fc 	movl	-4(%rbp), %eax
100000c89:	89 c6 	movl	%eax, %esi
100000c8b:	bf 20 00 00 00 	movl	$32, %edi
100000c90:	e8 68 fe ff ff 	callq	-408 <_display_sequence>
100000c95:	be 01 00 00 00 	movl	$1, %esi
100000c9a:	bf 2f 00 00 00 	movl	$47, %edi
100000c9f:	e8 59 fe ff ff 	callq	-423 <_display_sequence>
100000ca4:	80 7d d4 00 	cmpb	$0, -44(%rbp)
100000ca8:	0f 84 cd 00 00 00 	je	205 <_display_floor+0x162>
100000cae:	8b 45 ec 	movl	-20(%rbp), %eax
100000cb1:	2b 45 e8 	subl	-24(%rbp), %eax
100000cb4:	3b 45 f4 	cmpl	-12(%rbp), %eax
100000cb7:	0f 8f be 00 00 00 	jg	190 <_display_floor+0x162>
100000cbd:	8b 45 f8 	movl	-8(%rbp), %eax
100000cc0:	89 c2 	movl	%eax, %edx
100000cc2:	c1 ea 1f 	shrl	$31, %edx
100000cc5:	01 d0 	addl	%edx, %eax
100000cc7:	d1 f8 	sarl	%eax
100000cc9:	89 c2 	movl	%eax, %edx
100000ccb:	8b 45 e8 	movl	-24(%rbp), %eax
100000cce:	89 c1 	movl	%eax, %ecx
100000cd0:	c1 e9 1f 	shrl	$31, %ecx
100000cd3:	01 c8 	addl	%ecx, %eax
100000cd5:	d1 f8 	sarl	%eax
100000cd7:	29 c2 	subl	%eax, %edx
100000cd9:	89 d0 	movl	%edx, %eax
100000cdb:	83 e8 01 	subl	$1, %eax
100000cde:	89 c6 	movl	%eax, %esi
100000ce0:	bf 2a 00 00 00 	movl	$42, %edi
100000ce5:	e8 13 fe ff ff 	callq	-493 <_display_sequence>
100000cea:	83 7d e8 04 	cmpl	$4, -24(%rbp)
100000cee:	7e 4d 	jle	77 <_display_floor+0x124>
100000cf0:	8b 45 e8 	movl	-24(%rbp), %eax
100000cf3:	89 c2 	movl	%eax, %edx
100000cf5:	c1 ea 1f 	shrl	$31, %edx
100000cf8:	01 d0 	addl	%edx, %eax
100000cfa:	d1 f8 	sarl	%eax
100000cfc:	8b 55 ec 	movl	-20(%rbp), %edx
100000cff:	29 c2 	subl	%eax, %edx
100000d01:	89 d0 	movl	%edx, %eax
100000d03:	83 e8 01 	subl	$1, %eax
100000d06:	3b 45 f4 	cmpl	-12(%rbp), %eax
100000d09:	75 32 	jne	50 <_display_floor+0x124>
100000d0b:	8b 45 e8 	movl	-24(%rbp), %eax
100000d0e:	83 e8 02 	subl	$2, %eax
100000d11:	89 c6 	movl	%eax, %esi
100000d13:	bf 7c 00 00 00 	movl	$124, %edi
100000d18:	e8 e0 fd ff ff 	callq	-544 <_display_sequence>
100000d1d:	be 01 00 00 00 	movl	$1, %esi
100000d22:	bf 24 00 00 00 	movl	$36, %edi
100000d27:	e8 d1 fd ff ff 	callq	-559 <_display_sequence>
100000d2c:	be 01 00 00 00 	movl	$1, %esi
100000d31:	bf 7c 00 00 00 	movl	$124, %edi
100000d36:	e8 c2 fd ff ff 	callq	-574 <_display_sequence>
100000d3b:	eb 0f 	jmp	15 <_display_floor+0x133>
100000d3d:	8b 45 e8 	movl	-24(%rbp), %eax
100000d40:	89 c6 	movl	%eax, %esi
100000d42:	bf 7c 00 00 00 	movl	$124, %edi
100000d47:	e8 b1 fd ff ff 	callq	-591 <_display_sequence>
100000d4c:	8b 45 f8 	movl	-8(%rbp), %eax
100000d4f:	89 c2 	movl	%eax, %edx
100000d51:	c1 ea 1f 	shrl	$31, %edx
100000d54:	01 d0 	addl	%edx, %eax
100000d56:	d1 f8 	sarl	%eax
100000d58:	89 c2 	movl	%eax, %edx
100000d5a:	8b 45 e8 	movl	-24(%rbp), %eax
100000d5d:	89 c1 	movl	%eax, %ecx
100000d5f:	c1 e9 1f 	shrl	$31, %ecx
100000d62:	01 c8 	addl	%ecx, %eax
100000d64:	d1 f8 	sarl	%eax
100000d66:	29 c2 	subl	%eax, %edx
100000d68:	89 d0 	movl	%edx, %eax
100000d6a:	83 e8 01 	subl	$1, %eax
100000d6d:	89 c6 	movl	%eax, %esi
100000d6f:	bf 2a 00 00 00 	movl	$42, %edi
100000d74:	e8 84 fd ff ff 	callq	-636 <_display_sequence>
100000d79:	eb 12 	jmp	18 <_display_floor+0x174>
100000d7b:	8b 45 f8 	movl	-8(%rbp), %eax
100000d7e:	83 e8 02 	subl	$2, %eax
100000d81:	89 c6 	movl	%eax, %esi
100000d83:	bf 2a 00 00 00 	movl	$42, %edi
100000d88:	e8 70 fd ff ff 	callq	-656 <_display_sequence>
100000d8d:	be 01 00 00 00 	movl	$1, %esi
100000d92:	bf 5c 00 00 00 	movl	$92, %edi
100000d97:	e8 61 fd ff ff 	callq	-671 <_display_sequence>
100000d9c:	83 6d fc 01 	subl	$1, -4(%rbp)
100000da0:	83 45 f8 02 	addl	$2, -8(%rbp)
100000da4:	bf 0a 00 00 00 	movl	$10, %edi
100000da9:	e8 f4 fc ff ff 	callq	-780 <_ft_putchar>
100000dae:	83 45 f4 01 	addl	$1, -12(%rbp)
100000db2:	8b 45 f4 	movl	-12(%rbp), %eax
100000db5:	3b 45 ec 	cmpl	-20(%rbp), %eax
100000db8:	0f 8c c8 fe ff ff 	jl	-312 <_display_floor+0x6D>
100000dbe:	c9 	leave
100000dbf:	c3 	retq
100000dc0:	55 	pushq	%rbp
100000dc1:	48 89 e5 	movq	%rsp, %rbp
100000dc4:	48 83 ec 20 	subq	$32, %rsp
100000dc8:	89 7d ec 	movl	%edi, -20(%rbp)
100000dcb:	8b 45 ec 	movl	-20(%rbp), %eax
100000dce:	89 45 fc 	movl	%eax, -4(%rbp)
100000dd1:	83 7d ec 00 	cmpl	$0, -20(%rbp)
100000dd5:	7f 02 	jg	2 <_sastantua+0x19>
100000dd7:	eb 25 	jmp	37 <_sastantua+0x3E>
100000dd9:	eb 1d 	jmp	29 <_sastantua+0x38>
100000ddb:	83 7d ec 01 	cmpl	$1, -20(%rbp)
100000ddf:	0f 94 c0 	sete	%al
100000de2:	0f b6 d0 	movzbl	%al, %edx
100000de5:	8b 4d fc 	movl	-4(%rbp), %ecx
100000de8:	8b 45 ec 	movl	-20(%rbp), %eax
100000deb:	89 ce 	movl	%ecx, %esi
100000ded:	89 c7 	movl	%eax, %edi
100000def:	e8 25 fe ff ff 	callq	-475 <_display_floor>
100000df4:	83 6d ec 01 	subl	$1, -20(%rbp)
100000df8:	83 7d ec 00 	cmpl	$0, -20(%rbp)
100000dfc:	7f dd 	jg	-35 <_sastantua+0x1B>
100000dfe:	c9 	leave
100000dff:	c3 	retq

_ft_putchar:
100000aa2:	55 	pushq	%rbp
100000aa3:	48 89 e5 	movq	%rsp, %rbp
100000aa6:	48 83 ec 10 	subq	$16, %rsp
100000aaa:	89 f8 	movl	%edi, %eax
100000aac:	88 45 fc 	movb	%al, -4(%rbp)
100000aaf:	48 8d 45 fc 	leaq	-4(%rbp), %rax
100000ab3:	ba 01 00 00 00 	movl	$1, %edx
100000ab8:	48 89 c6 	movq	%rax, %rsi
100000abb:	bf 01 00 00 00 	movl	$1, %edi
100000ac0:	e8 41 03 00 00 	callq	833
100000ac5:	c9 	leave
100000ac6:	c3 	retq

_main:
100000ac7:	55 	pushq	%rbp
100000ac8:	48 89 e5 	movq	%rsp, %rbp
100000acb:	48 83 ec 10 	subq	$16, %rsp
100000acf:	89 7d fc 	movl	%edi, -4(%rbp)
100000ad2:	48 89 75 f0 	movq	%rsi, -16(%rbp)
100000ad6:	83 7d fc 02 	cmpl	$2, -4(%rbp)
100000ada:	75 1a 	jne	26 <_main+0x2F>
100000adc:	48 8b 45 f0 	movq	-16(%rbp), %rax
100000ae0:	48 83 c0 08 	addq	$8, %rax
100000ae4:	48 8b 00 	movq	(%rax), %rax
100000ae7:	48 89 c7 	movq	%rax, %rdi
100000aea:	e8 11 03 00 00 	callq	785
100000aef:	89 c7 	movl	%eax, %edi
100000af1:	e8 ca 02 00 00 	callq	714 <_sastantua>
100000af6:	b8 00 00 00 00 	movl	$0, %eax
100000afb:	c9 	leave
100000afc:	c3 	retq

_display_sequence:
100000afd:	55 	pushq	%rbp
100000afe:	48 89 e5 	movq	%rsp, %rbp
100000b01:	48 83 ec 10 	subq	$16, %rsp
100000b05:	89 f8 	movl	%edi, %eax
100000b07:	89 75 f8 	movl	%esi, -8(%rbp)
100000b0a:	88 45 fc 	movb	%al, -4(%rbp)
100000b0d:	eb 0f 	jmp	15 <_display_sequence+0x21>
100000b0f:	0f be 45 fc 	movsbl	-4(%rbp), %eax
100000b13:	89 c7 	movl	%eax, %edi
100000b15:	e8 88 ff ff ff 	callq	-120 <_ft_putchar>
100000b1a:	83 6d f8 01 	subl	$1, -8(%rbp)
100000b1e:	83 7d f8 00 	cmpl	$0, -8(%rbp)
100000b22:	7f eb 	jg	-21 <_display_sequence+0x12>
100000b24:	c9 	leave
100000b25:	c3 	retq

_calc_width_top_floor:
100000b26:	55 	pushq	%rbp
100000b27:	48 89 e5 	movq	%rsp, %rbp
100000b2a:	89 7d ec 	movl	%edi, -20(%rbp)
100000b2d:	89 75 e8 	movl	%esi, -24(%rbp)
100000b30:	c7 45 fc 03 00 00 00 	movl	$3, -4(%rbp)
100000b37:	c7 45 f8 00 00 00 00 	movl	$0, -8(%rbp)
100000b3e:	c7 45 f4 00 00 00 00 	movl	$0, -12(%rbp)
100000b45:	eb 31 	jmp	49 <_calc_width_top_floor+0x52>
100000b47:	8b 45 f8 	movl	-8(%rbp), %eax
100000b4a:	83 c0 03 	addl	$3, %eax
100000b4d:	89 45 f4 	movl	%eax, -12(%rbp)
100000b50:	eb 08 	jmp	8 <_calc_width_top_floor+0x34>
100000b52:	83 45 fc 02 	addl	$2, -4(%rbp)
100000b56:	83 6d f4 01 	subl	$1, -12(%rbp)
100000b5a:	83 7d f4 00 	cmpl	$0, -12(%rbp)
100000b5e:	7f f2 	jg	-14 <_calc_width_top_floor+0x2C>
100000b60:	8b 45 f8 	movl	-8(%rbp), %eax
100000b63:	89 c2 	movl	%eax, %edx
100000b65:	c1 ea 1f 	shrl	$31, %edx
100000b68:	01 d0 	addl	%edx, %eax
100000b6a:	d1 f8 	sarl	%eax
100000b6c:	83 c0 02 	addl	$2, %eax
100000b6f:	01 c0 	addl	%eax, %eax
100000b71:	01 45 fc 	addl	%eax, -4(%rbp)
100000b74:	83 45 f8 01 	addl	$1, -8(%rbp)
100000b78:	8b 45 e8 	movl	-24(%rbp), %eax
100000b7b:	2b 45 ec 	subl	-20(%rbp), %eax
100000b7e:	3b 45 f8 	cmpl	-8(%rbp), %eax
100000b81:	7f c4 	jg	-60 <_calc_width_top_floor+0x21>
100000b83:	8b 45 fc 	movl	-4(%rbp), %eax
100000b86:	5d 	popq	%rbp
100000b87:	c3 	retq

_calc_space_top_floot:
100000b88:	55 	pushq	%rbp
100000b89:	48 89 e5 	movq	%rsp, %rbp
100000b8c:	48 83 ec 18 	subq	$24, %rsp
100000b90:	89 7d ec 	movl	%edi, -20(%rbp)
100000b93:	89 75 e8 	movl	%esi, -24(%rbp)
100000b96:	8b 45 e8 	movl	-24(%rbp), %eax
100000b99:	89 c6 	movl	%eax, %esi
100000b9b:	bf 01 00 00 00 	movl	$1, %edi
100000ba0:	e8 81 ff ff ff 	callq	-127 <_calc_width_top_floor>
100000ba5:	8b 55 e8 	movl	-24(%rbp), %edx
100000ba8:	83 c2 01 	addl	$1, %edx
100000bab:	01 d2 	addl	%edx, %edx
100000bad:	01 d0 	addl	%edx, %eax
100000baf:	89 45 f0 	movl	%eax, -16(%rbp)
100000bb2:	8b 45 f0 	movl	-16(%rbp), %eax
100000bb5:	89 c2 	movl	%eax, %edx
100000bb7:	c1 ea 1f 	shrl	$31, %edx
100000bba:	01 d0 	addl	%edx, %eax
100000bbc:	d1 f8 	sarl	%eax
100000bbe:	83 e8 01 	subl	$1, %eax
100000bc1:	89 45 fc 	movl	%eax, -4(%rbp)
100000bc4:	c7 45 f8 00 00 00 00 	movl	$0, -8(%rbp)
100000bcb:	c7 45 f4 00 00 00 00 	movl	$0, -12(%rbp)
100000bd2:	eb 35 	jmp	53 <_calc_space_top_floot+0x81>
100000bd4:	8b 45 f8 	movl	-8(%rbp), %eax
100000bd7:	83 c0 03 	addl	$3, %eax
100000bda:	89 45 f4 	movl	%eax, -12(%rbp)
100000bdd:	eb 08 	jmp	8 <_calc_space_top_floot+0x5F>
100000bdf:	83 6d fc 01 	subl	$1, -4(%rbp)
100000be3:	83 6d f4 01 	subl	$1, -12(%rbp)
100000be7:	83 7d f4 00 	cmpl	$0, -12(%rbp)
100000beb:	7f f2 	jg	-14 <_calc_space_top_floot+0x57>
100000bed:	8b 45 f8 	movl	-8(%rbp), %eax
100000bf0:	89 c2 	movl	%eax, %edx
100000bf2:	c1 ea 1f 	shrl	$31, %edx
100000bf5:	01 d0 	addl	%edx, %eax
100000bf7:	d1 f8 	sarl	%eax
100000bf9:	ba fe ff ff ff 	movl	$4294967294, %edx
100000bfe:	29 c2 	subl	%eax, %edx
100000c00:	89 d0 	movl	%edx, %eax
100000c02:	01 45 fc 	addl	%eax, -4(%rbp)
100000c05:	83 45 f8 01 	addl	$1, -8(%rbp)
100000c09:	8b 45 e8 	movl	-24(%rbp), %eax
100000c0c:	2b 45 ec 	subl	-20(%rbp), %eax
100000c0f:	3b 45 f8 	cmpl	-8(%rbp), %eax
100000c12:	7f c0 	jg	-64 <_calc_space_top_floot+0x4C>
100000c14:	8b 45 fc 	movl	-4(%rbp), %eax
100000c17:	c9 	leave
100000c18:	c3 	retq

_display_floor:
100000c19:	55 	pushq	%rbp
100000c1a:	48 89 e5 	movq	%rsp, %rbp
100000c1d:	48 83 ec 30 	subq	$48, %rsp
100000c21:	89 7d dc 	movl	%edi, -36(%rbp)
100000c24:	89 75 d8 	movl	%esi, -40(%rbp)
100000c27:	89 d0 	movl	%edx, %eax
100000c29:	88 45 d4 	movb	%al, -44(%rbp)
100000c2c:	8b 45 d8 	movl	-40(%rbp), %eax
100000c2f:	2b 45 dc 	subl	-36(%rbp), %eax
100000c32:	89 45 f0 	movl	%eax, -16(%rbp)
100000c35:	8b 45 f0 	movl	-16(%rbp), %eax
100000c38:	83 c0 03 	addl	$3, %eax
100000c3b:	89 45 ec 	movl	%eax, -20(%rbp)
100000c3e:	8b 55 d8 	movl	-40(%rbp), %edx
100000c41:	8b 45 dc 	movl	-36(%rbp), %eax
100000c44:	89 d6 	movl	%edx, %esi
100000c46:	89 c7 	movl	%eax, %edi
100000c48:	e8 3b ff ff ff 	callq	-197 <_calc_space_top_floot>
100000c4d:	89 45 fc 	movl	%eax, -4(%rbp)
100000c50:	8b 55 d8 	movl	-40(%rbp), %edx
100000c53:	8b 45 dc 	movl	-36(%rbp), %eax
100000c56:	89 d6 	movl	%edx, %esi
100000c58:	89 c7 	movl	%eax, %edi
100000c5a:	e8 c7 fe ff ff 	callq	-313 <_calc_width_top_floor>
100000c5f:	89 45 f8 	movl	%eax, -8(%rbp)
100000c62:	8b 45 d8 	movl	-40(%rbp), %eax
100000c65:	83 e0 01 	andl	$1, %eax
100000c68:	85 c0 	testl	%eax, %eax
100000c6a:	75 08 	jne	8 <_display_floor+0x5B>
100000c6c:	8b 45 d8 	movl	-40(%rbp), %eax
100000c6f:	83 e8 01 	subl	$1, %eax
100000c72:	eb 03 	jmp	3 <_display_floor+0x5E>
100000c74:	8b 45 d8 	movl	-40(%rbp), %eax
100000c77:	89 45 e8 	movl	%eax, -24(%rbp)
100000c7a:	c7 45 f4 00 00 00 00 	movl	$0, -12(%rbp)
100000c81:	e9 2c 01 00 00 	jmp	300 <_display_floor+0x199>
100000c86:	8b 45 fc 	movl	-4(%rbp), %eax
100000c89:	89 c6 	movl	%eax, %esi
100000c8b:	bf 20 00 00 00 	movl	$32, %edi
100000c90:	e8 68 fe ff ff 	callq	-408 <_display_sequence>
100000c95:	be 01 00 00 00 	movl	$1, %esi
100000c9a:	bf 2f 00 00 00 	movl	$47, %edi
100000c9f:	e8 59 fe ff ff 	callq	-423 <_display_sequence>
100000ca4:	80 7d d4 00 	cmpb	$0, -44(%rbp)
100000ca8:	0f 84 cd 00 00 00 	je	205 <_display_floor+0x162>
100000cae:	8b 45 ec 	movl	-20(%rbp), %eax
100000cb1:	2b 45 e8 	subl	-24(%rbp), %eax
100000cb4:	3b 45 f4 	cmpl	-12(%rbp), %eax
100000cb7:	0f 8f be 00 00 00 	jg	190 <_display_floor+0x162>
100000cbd:	8b 45 f8 	movl	-8(%rbp), %eax
100000cc0:	89 c2 	movl	%eax, %edx
100000cc2:	c1 ea 1f 	shrl	$31, %edx
100000cc5:	01 d0 	addl	%edx, %eax
100000cc7:	d1 f8 	sarl	%eax
100000cc9:	89 c2 	movl	%eax, %edx
100000ccb:	8b 45 e8 	movl	-24(%rbp), %eax
100000cce:	89 c1 	movl	%eax, %ecx
100000cd0:	c1 e9 1f 	shrl	$31, %ecx
100000cd3:	01 c8 	addl	%ecx, %eax
100000cd5:	d1 f8 	sarl	%eax
100000cd7:	29 c2 	subl	%eax, %edx
100000cd9:	89 d0 	movl	%edx, %eax
100000cdb:	83 e8 01 	subl	$1, %eax
100000cde:	89 c6 	movl	%eax, %esi
100000ce0:	bf 2a 00 00 00 	movl	$42, %edi
100000ce5:	e8 13 fe ff ff 	callq	-493 <_display_sequence>
100000cea:	83 7d e8 04 	cmpl	$4, -24(%rbp)
100000cee:	7e 4d 	jle	77 <_display_floor+0x124>
100000cf0:	8b 45 e8 	movl	-24(%rbp), %eax
100000cf3:	89 c2 	movl	%eax, %edx
100000cf5:	c1 ea 1f 	shrl	$31, %edx
100000cf8:	01 d0 	addl	%edx, %eax
100000cfa:	d1 f8 	sarl	%eax
100000cfc:	8b 55 ec 	movl	-20(%rbp), %edx
100000cff:	29 c2 	subl	%eax, %edx
100000d01:	89 d0 	movl	%edx, %eax
100000d03:	83 e8 01 	subl	$1, %eax
100000d06:	3b 45 f4 	cmpl	-12(%rbp), %eax
100000d09:	75 32 	jne	50 <_display_floor+0x124>
100000d0b:	8b 45 e8 	movl	-24(%rbp), %eax
100000d0e:	83 e8 02 	subl	$2, %eax
100000d11:	89 c6 	movl	%eax, %esi
100000d13:	bf 7c 00 00 00 	movl	$124, %edi
100000d18:	e8 e0 fd ff ff 	callq	-544 <_display_sequence>
100000d1d:	be 01 00 00 00 	movl	$1, %esi
100000d22:	bf 24 00 00 00 	movl	$36, %edi
100000d27:	e8 d1 fd ff ff 	callq	-559 <_display_sequence>
100000d2c:	be 01 00 00 00 	movl	$1, %esi
100000d31:	bf 7c 00 00 00 	movl	$124, %edi
100000d36:	e8 c2 fd ff ff 	callq	-574 <_display_sequence>
100000d3b:	eb 0f 	jmp	15 <_display_floor+0x133>
100000d3d:	8b 45 e8 	movl	-24(%rbp), %eax
100000d40:	89 c6 	movl	%eax, %esi
100000d42:	bf 7c 00 00 00 	movl	$124, %edi
100000d47:	e8 b1 fd ff ff 	callq	-591 <_display_sequence>
100000d4c:	8b 45 f8 	movl	-8(%rbp), %eax
100000d4f:	89 c2 	movl	%eax, %edx
100000d51:	c1 ea 1f 	shrl	$31, %edx
100000d54:	01 d0 	addl	%edx, %eax
100000d56:	d1 f8 	sarl	%eax
100000d58:	89 c2 	movl	%eax, %edx
100000d5a:	8b 45 e8 	movl	-24(%rbp), %eax
100000d5d:	89 c1 	movl	%eax, %ecx
100000d5f:	c1 e9 1f 	shrl	$31, %ecx
100000d62:	01 c8 	addl	%ecx, %eax
100000d64:	d1 f8 	sarl	%eax
100000d66:	29 c2 	subl	%eax, %edx
100000d68:	89 d0 	movl	%edx, %eax
100000d6a:	83 e8 01 	subl	$1, %eax
100000d6d:	89 c6 	movl	%eax, %esi
100000d6f:	bf 2a 00 00 00 	movl	$42, %edi
100000d74:	e8 84 fd ff ff 	callq	-636 <_display_sequence>
100000d79:	eb 12 	jmp	18 <_display_floor+0x174>
100000d7b:	8b 45 f8 	movl	-8(%rbp), %eax
100000d7e:	83 e8 02 	subl	$2, %eax
100000d81:	89 c6 	movl	%eax, %esi
100000d83:	bf 2a 00 00 00 	movl	$42, %edi
100000d88:	e8 70 fd ff ff 	callq	-656 <_display_sequence>
100000d8d:	be 01 00 00 00 	movl	$1, %esi
100000d92:	bf 5c 00 00 00 	movl	$92, %edi
100000d97:	e8 61 fd ff ff 	callq	-671 <_display_sequence>
100000d9c:	83 6d fc 01 	subl	$1, -4(%rbp)
100000da0:	83 45 f8 02 	addl	$2, -8(%rbp)
100000da4:	bf 0a 00 00 00 	movl	$10, %edi
100000da9:	e8 f4 fc ff ff 	callq	-780 <_ft_putchar>
100000dae:	83 45 f4 01 	addl	$1, -12(%rbp)
100000db2:	8b 45 f4 	movl	-12(%rbp), %eax
100000db5:	3b 45 ec 	cmpl	-20(%rbp), %eax
100000db8:	0f 8c c8 fe ff ff 	jl	-312 <_display_floor+0x6D>
100000dbe:	c9 	leave
100000dbf:	c3 	retq

_sastantua:
100000dc0:	55 	pushq	%rbp
100000dc1:	48 89 e5 	movq	%rsp, %rbp
100000dc4:	48 83 ec 20 	subq	$32, %rsp
100000dc8:	89 7d ec 	movl	%edi, -20(%rbp)
100000dcb:	8b 45 ec 	movl	-20(%rbp), %eax
100000dce:	89 45 fc 	movl	%eax, -4(%rbp)
100000dd1:	83 7d ec 00 	cmpl	$0, -20(%rbp)
100000dd5:	7f 02 	jg	2 <_sastantua+0x19>
100000dd7:	eb 25 	jmp	37 <_sastantua+0x3E>
100000dd9:	eb 1d 	jmp	29 <_sastantua+0x38>
100000ddb:	83 7d ec 01 	cmpl	$1, -20(%rbp)
100000ddf:	0f 94 c0 	sete	%al
100000de2:	0f b6 d0 	movzbl	%al, %edx
100000de5:	8b 4d fc 	movl	-4(%rbp), %ecx
100000de8:	8b 45 ec 	movl	-20(%rbp), %eax
100000deb:	89 ce 	movl	%ecx, %esi
100000ded:	89 c7 	movl	%eax, %edi
100000def:	e8 25 fe ff ff 	callq	-475 <_display_floor>
100000df4:	83 6d ec 01 	subl	$1, -20(%rbp)
100000df8:	83 7d ec 00 	cmpl	$0, -20(%rbp)
100000dfc:	7f dd 	jg	-35 <_sastantua+0x1B>
100000dfe:	c9 	leave
100000dff:	c3 	retq
Disassembly of section __TEXT,__stubs:
__stubs:
100000e00:	ff 25 0a 02 00 00 	jmpq	*522(%rip)
100000e06:	ff 25 0c 02 00 00 	jmpq	*524(%rip)
Disassembly of section __TEXT,__stub_helper:
__stub_helper:
100000e0c:	4c 8d 1d f5 01 00 00 	leaq	501(%rip), %r11
100000e13:	41 53 	pushq	%r11
100000e15:	ff 25 e5 01 00 00 	jmpq	*485(%rip)
100000e1b:	90 	nop
100000e1c:	68 00 00 00 00 	pushq	$0
100000e21:	e9 e6 ff ff ff 	jmp	-26 <__stub_helper>
100000e26:	68 0c 00 00 00 	pushq	$12
100000e2b:	e9 dc ff ff ff 	jmp	-36 <__stub_helper>

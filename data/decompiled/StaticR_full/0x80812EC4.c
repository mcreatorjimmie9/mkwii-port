/* Function at 0x80812EC4, size=288 bytes */
/* Stack frame: 32 bytes */

int FUN_80812EC4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lis r7, 0 */ // 0x80812EC8
    /* lfs f1, 0(r5) */ // 0x80812ECC
    r7 = r7 + 0; // 0x80812ED0
    /* lfs f3, 0(r3) */ // 0x80812ED4
    /* li r0, 0 */ // 0x80812ED8
    /* lfs f0, 0(r6) */ // 0x80812EDC
    /* fmuls f5, f3, f1 */ // 0x80812EE0
    /* lfs f4, 4(r3) */ // 0x80812EE4
    /* fmuls f1, f3, f0 */ // 0x80812EE8
    /* lfs f2, 4(r5) */ // 0x80812EEC
    /* lfs f0, 4(r6) */ // 0x80812EF0
    /* fmuls f3, f4, f2 */ // 0x80812EF4
    /* fmuls f0, f4, f0 */ // 0x80812EF8
    /* lfs f6, 8(r3) */ // 0x80812EFC
    /* lfs f4, 8(r5) */ // 0x80812F00
    /* lfs f2, 8(r6) */ // 0x80812F04
    /* fadds f3, f5, f3 */ // 0x80812F08
    /* fmuls f4, f6, f4 */ // 0x80812F0C
    /* fmuls f2, f6, f2 */ // 0x80812F10
    /* lfs f5, 4(r7) */ // 0x80812F14
    /* fadds f0, f1, f0 */ // 0x80812F18
    /* fadds f3, f4, f3 */ // 0x80812F1C
    /* fadds f2, f2, f0 */ // 0x80812F20
    /* fcmpu cr0, f3, f2 */ // 0x80812F24
    if (!=) goto 0x0x80812f30;
    /* b 0x80812f44 */ // 0x80812F2C
    /* lfs f1, 0xc(r3) */ // 0x80812F30
    /* fsubs f0, f3, f2 */ // 0x80812F34
    /* fadds f1, f2, f1 */ // 0x80812F38
    /* fneg f1, f1 */ // 0x80812F3C
    /* fdivs f5, f1, f0 */ // 0x80812F40
    /* lfs f1, 0(r7) */ // 0x80812F44
    /* .byte 0xfc, 0x05, 0x08, 0x40 */ // 0x80812F48
    /* cror cr0eq, cr0gt, cr0eq */ // 0x80812F4C
    if (!=) goto 0x0x80812fd8;
    /* lfs f0, 8(r7) */ // 0x80812F54
    /* .byte 0xfc, 0x05, 0x00, 0x40 */ // 0x80812F58
    /* cror cr0eq, cr0lt, cr0eq */ // 0x80812F5C
    if (!=) goto 0x0x80812fd8;
    /* .byte 0xfc, 0x05, 0x08, 0x40 */ // 0x80812F64
    /* cror cr0eq, cr0gt, cr0eq */ // 0x80812F68
    if (!=) goto 0x0x80812fd4;
    /* .byte 0xfc, 0x05, 0x00, 0x40 */ // 0x80812F70
    /* cror cr0eq, cr0lt, cr0eq */ // 0x80812F74
    if (!=) goto 0x0x80812fd4;
    /* lfs f2, 0(r6) */ // 0x80812F7C
    /* fsubs f1, f0, f5 */ // 0x80812F80
    /* lfs f7, 0(r5) */ // 0x80812F84
    /* lfs f0, 4(r6) */ // 0x80812F88
    /* fsubs f3, f2, f7 */ // 0x80812F8C
    /* lfs f6, 4(r5) */ // 0x80812F90
    /* lfs f2, 8(r6) */ // 0x80812F94
    /* fsubs f4, f0, f6 */ // 0x80812F98
    /* lfs f5, 8(r5) */ // 0x80812F9C
    /* fmuls f0, f3, f1 */ // 0x80812FA0
    /* fsubs f3, f2, f5 */ // 0x80812FA4
    /* fmuls f4, f4, f1 */ // 0x80812FA8
    /* stfs f0, 8(r1) */ // 0x80812FAC
    /* fadds f2, f7, f0 */ // 0x80812FB0
    /* fmuls f3, f3, f1 */ // 0x80812FB4
    /* stfs f4, 0xc(r1) */ // 0x80812FB8
    /* fadds f1, f6, f4 */ // 0x80812FBC
    /* stfs f3, 0x10(r1) */ // 0x80812FC0
    /* fadds f0, f5, f3 */ // 0x80812FC4
    /* stfs f2, 0(r4) */ // 0x80812FC8
    /* stfs f1, 4(r4) */ // 0x80812FCC
    /* stfs f0, 8(r4) */ // 0x80812FD0
    /* li r0, 1 */ // 0x80812FD4
    r3 = r0;
    return;
}
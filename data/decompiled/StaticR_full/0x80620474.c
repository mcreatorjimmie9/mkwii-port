/* Function at 0x80620474, size=104 bytes */
/* Stack frame: 48 bytes */
/* Calls: 1 function(s) */

int FUN_80620474(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* lis r3, 0 */ // 0x8062047C
    /* lfs f2, 0x14(r6) */ // 0x80620480
    *(0x34 + r1) = r0; // stw @ 0x80620484
    /* lfs f3, 0(r3) */ // 0x80620488
    r3 = r4;
    /* lfs f1, 0x10(r6) */ // 0x80620490
    /* lfs f0, 0xc(r6) */ // 0x80620498
    /* fmuls f2, f3, f2 */ // 0x8062049C
    *(0x2c + r1) = r31; // stw @ 0x806204A0
    /* fmuls f1, f3, f1 */ // 0x806204A4
    /* fmuls f0, f3, f0 */ // 0x806204A8
    r8 = *(0 + r6); // lwz @ 0x806204AC
    r7 = *(4 + r6); // lwz @ 0x806204B0
    r0 = *(8 + r6); // lwz @ 0x806204B4
    r31 = r5;
    /* stfs f1, 0x18(r1) */ // 0x806204BC
    /* stfs f0, 0x14(r1) */ // 0x806204C4
    /* stfs f2, 0x1c(r1) */ // 0x806204C8
    *(8 + r1) = r8; // stw @ 0x806204CC
    *(0xc + r1) = r7; // stw @ 0x806204D0
    *(0x10 + r1) = r0; // stw @ 0x806204D4
    FUN_805E3430(); // bl 0x805E3430
}
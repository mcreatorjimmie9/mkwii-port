/* Function at 0x8078C034, size=164 bytes */
/* Stack frame: 0 bytes */

int FUN_8078C034(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* lis r7, 0 */ // 0x8078C034
    r7 = *(0 + r7); // lwz @ 0x8078C038
    if (==) goto 0x0x8078c04c;
    r0 = *(0x70 + r7); // lbz @ 0x8078C044
    /* b 0x8078c050 */ // 0x8078C048
    /* li r0, 0 */ // 0x8078C04C
    /* bnelr  */ // 0x8078C054
    /* li r0, 3 */ // 0x8078C058
    r7 = r3;
    /* li r9, 0 */ // 0x8078C060
    /* mtctr r0 */ // 0x8078C064
    r8 = *(0x1c + r7); // lwz @ 0x8078C068
    if (==) goto 0x0x8078c094;
    if (==) goto 0x0x8078c080;
    r0 = *(0x90 + r8); // lwz @ 0x8078C078
    /* b 0x8078c084 */ // 0x8078C07C
    /* li r0, -1 */ // 0x8078C080
    if (!=) goto 0x0x8078c094;
    /* li r0, 1 */ // 0x8078C08C
    /* b 0x8078c098 */ // 0x8078C090
    /* li r0, 0 */ // 0x8078C094
    if (==) goto 0x0x8078c0bc;
    /* mulli r7, r9, 0x74 */ // 0x8078C0A0
    r4 = r5;
    /* mulli r0, r6, 0x1c */ // 0x8078C0A8
    r3 = r3 + r7; // 0x8078C0AC
    r3 = r3 + r0; // 0x8078C0B0
    r3 = r3 + 0x20; // 0x8078C0B4
    /* b 0x805e3430 */ // 0x8078C0B8
    r7 = r7 + 0x74; // 0x8078C0BC
    r9 = r9 + 1; // 0x8078C0C0
    if (counter-- != 0) goto 0x0x8078c068;
    /* lis r3, 0 */ // 0x8078C0C8
    /* lfs f0, 0(r3) */ // 0x8078C0CC
    /* fcmpu cr0, f0, f1 */ // 0x8078C0D0
    return;
}
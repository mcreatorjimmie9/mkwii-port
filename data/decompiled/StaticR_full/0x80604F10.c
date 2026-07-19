/* Function at 0x80604F10, size=472 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_80604F10(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r7, 0 */ // 0x80604F18
    r31 = r6;
    *(0x28 + r1) = r30; // stw @ 0x80604F28
    r30 = r5;
    /* li r5, 0 */ // 0x80604F30
    *(0x24 + r1) = r29; // stw @ 0x80604F34
    r29 = r3;
    *(0x20 + r1) = r28; // stw @ 0x80604F3C
    r7 = *(0 + r7); // lwz @ 0x80604F40
    r0 = *(0xb70 + r7); // lwz @ 0x80604F44
    if (<) goto 0x0x80604f5c;
    if (>) goto 0x0x80604f5c;
    /* li r5, 1 */ // 0x80604F58
    if (==) goto 0x0x80604f84;
    r0 = *(0x13 + r3); // lbz @ 0x80604F64
    /* mulli r0, r0, 0xf0 */ // 0x80604F68
    r3 = r7 + r0; // 0x80604F6C
    r0 = *(0x38 + r3); // lwz @ 0x80604F70
    if (!=) goto 0x0x80604f84;
    /* li r3, 0 */ // 0x80604F7C
    /* b 0x806050c8 */ // 0x80604F80
    /* lis r7, 0 */ // 0x80604F84
    r10 = *(0 + r7); // lwzu @ 0x80604F88
    *(8 + r1) = r10; // stw @ 0x80604F8C
    r9 = *(4 + r7); // lwz @ 0x80604F94
    /* slwi r5, r4, 2 */ // 0x80604F98
    r8 = *(8 + r7); // lwz @ 0x80604F9C
    r7 = *(0xc + r7); // lwz @ 0x80604FA4
    /* li r0, 0 */ // 0x80604FA8
    *(0xc + r1) = r9; // stw @ 0x80604FAC
    *(0x10 + r1) = r8; // stw @ 0x80604FB0
    *(0x14 + r1) = r7; // stw @ 0x80604FB4
    *(0 + r6) = r0; // stb @ 0x80604FB8
    /* lwzx r28, r3, r5 */ // 0x80604FBC
    if (!=) goto 0x0x80604fe8;
    r3 = r28;
    r4 = r29;
    FUN_805EB784(r3, r4); // bl 0x805EB784
    if (!=) goto 0x0x80605060;
    /* li r0, 1 */ // 0x80604FD8
    *(0 + r31) = r0; // stb @ 0x80604FDC
    r28 = *(0xc + r1); // lwz @ 0x80604FE0
    /* b 0x80605060 */ // 0x80604FE4
    if (!=) goto 0x0x8060502c;
    r3 = r28;
    r4 = r29;
    FUN_805EB784(r3, r4); // bl 0x805EB784
    if (!=) goto 0x0x80605060;
    r28 = *(8 + r1); // lwz @ 0x80605004
    r4 = r29;
    r3 = r28;
    FUN_805EB784(r4, r3); // bl 0x805EB784
    if (!=) goto 0x0x80605060;
    /* li r0, 1 */ // 0x8060501C
    *(0 + r31) = r0; // stb @ 0x80605020
    r28 = *(0xc + r1); // lwz @ 0x80605024
    /* b 0x80605060 */ // 0x80605028
    if (!=) goto 0x0x80605060;
    r3 = r28;
    r4 = r29;
    FUN_805EB784(r3, r4); // bl 0x805EB784
    if (!=) goto 0x0x80605060;
    r3 = r28;
    r4 = r29;
    FUN_805EB784(r3, r4); // bl 0x805EB784
    if (!=) goto 0x0x80605060;
    r28 = *(0xc + r1); // lwz @ 0x8060505C
    r3 = r28;
    r4 = r29;
    /* li r31, 0 */ // 0x80605068
    FUN_805EB784(r3, r4); // bl 0x805EB784
    if (==) goto 0x0x806050c4;
    r0 = *(0x10 + r29); // lbz @ 0x80605078
    if (==) goto 0x0x80605098;
    r0 = *(4 + r30); // lwz @ 0x80605084
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x80605088
    if (!=) goto 0x0x80605098;
    /* li r0, 1 */ // 0x80605090
    *(0x24 + r30) = r0; // stw @ 0x80605094
    r3 = r30;
    r4 = r28;
    r5 = r29;
    /* li r6, 0 */ // 0x806050A4
    FUN_805EBE08(r3, r4, r5, r6); // bl 0x805EBE08
    r4 = *(0xc + r29); // lwz @ 0x806050AC
    if (==) goto 0x0x806050c0;
    r3 = r30;
    FUN_805EEFD4(r3); // bl 0x805EEFD4
    /* li r31, 1 */ // 0x806050C0
    r3 = r31;
    r0 = *(0x34 + r1); // lwz @ 0x806050C8
    r31 = *(0x2c + r1); // lwz @ 0x806050CC
    r30 = *(0x28 + r1); // lwz @ 0x806050D0
    r29 = *(0x24 + r1); // lwz @ 0x806050D4
    r28 = *(0x20 + r1); // lwz @ 0x806050D8
    return;
}
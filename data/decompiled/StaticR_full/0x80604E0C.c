/* Function at 0x80604E0C, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_80604E0C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x80604E14
    *(0x14 + r1) = r29; // stw @ 0x80604E24
    r29 = r4;
    /* li r4, 0 */ // 0x80604E2C
    *(0x10 + r1) = r28; // stw @ 0x80604E30
    r28 = r3;
    r5 = *(0 + r5); // lwz @ 0x80604E38
    r0 = *(0xb70 + r5); // lwz @ 0x80604E3C
    if (<) goto 0x0x80604e54;
    if (>) goto 0x0x80604e54;
    /* li r4, 1 */ // 0x80604E50
    if (==) goto 0x0x80604e7c;
    r0 = *(0x13 + r3); // lbz @ 0x80604E5C
    /* mulli r0, r0, 0xf0 */ // 0x80604E60
    r3 = r5 + r0; // 0x80604E64
    r0 = *(0x38 + r3); // lwz @ 0x80604E68
    if (!=) goto 0x0x80604e7c;
    /* li r3, 0 */ // 0x80604E74
    /* b 0x80604ef0 */ // 0x80604E78
    /* lis r3, 0 */ // 0x80604E7C
    r4 = r28;
    r3 = r3 + 0; // 0x80604E84
    /* li r30, 0 */ // 0x80604E88
    r31 = r3 + 0x67; // 0x80604E8C
    r3 = r31;
    FUN_805EB784(r4, r3, r3); // bl 0x805EB784
    if (==) goto 0x0x80604eec;
    r0 = *(0x10 + r28); // lbz @ 0x80604EA0
    if (==) goto 0x0x80604ec0;
    r0 = *(4 + r29); // lwz @ 0x80604EAC
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x80604EB0
    if (!=) goto 0x0x80604ec0;
    /* li r0, 1 */ // 0x80604EB8
    *(0x24 + r29) = r0; // stw @ 0x80604EBC
    r3 = r29;
    r4 = r31;
    r5 = r28;
    /* li r6, 0 */ // 0x80604ECC
    FUN_805EBE08(r3, r4, r5, r6); // bl 0x805EBE08
    r4 = *(0xc + r28); // lwz @ 0x80604ED4
    if (==) goto 0x0x80604ee8;
    r3 = r29;
    FUN_805EEFD4(r3); // bl 0x805EEFD4
    /* li r30, 1 */ // 0x80604EE8
    r3 = r30;
    r0 = *(0x24 + r1); // lwz @ 0x80604EF0
    r31 = *(0x1c + r1); // lwz @ 0x80604EF4
    r30 = *(0x18 + r1); // lwz @ 0x80604EF8
    r29 = *(0x14 + r1); // lwz @ 0x80604EFC
    r28 = *(0x10 + r1); // lwz @ 0x80604F00
    return;
}
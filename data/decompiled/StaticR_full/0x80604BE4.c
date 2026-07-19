/* Function at 0x80604BE4, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80604BE4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x80604BEC
    r5 = r5 + 0; // 0x80604BF4
    *(0x1c + r1) = r31; // stw @ 0x80604BF8
    r31 = r5 + 0x4f; // 0x80604BFC
    *(0x18 + r1) = r30; // stw @ 0x80604C00
    /* li r30, 0 */ // 0x80604C04
    *(0x14 + r1) = r29; // stw @ 0x80604C08
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80604C10
    r28 = r3;
    r4 = r28;
    r3 = r31;
    FUN_805EB784(r4, r3); // bl 0x805EB784
    if (==) goto 0x0x80604c78;
    r0 = *(0x10 + r28); // lbz @ 0x80604C2C
    if (==) goto 0x0x80604c4c;
    r0 = *(4 + r29); // lwz @ 0x80604C38
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x80604C3C
    if (!=) goto 0x0x80604c4c;
    /* li r0, 1 */ // 0x80604C44
    *(0x24 + r29) = r0; // stw @ 0x80604C48
    r3 = r29;
    r4 = r31;
    r5 = r28;
    /* li r6, 0 */ // 0x80604C58
    FUN_805EBE08(r3, r4, r5, r6); // bl 0x805EBE08
    r4 = *(0xc + r28); // lwz @ 0x80604C60
    if (==) goto 0x0x80604c74;
    r3 = r29;
    FUN_805EEFD4(r3); // bl 0x805EEFD4
    /* li r30, 1 */ // 0x80604C74
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x80604C7C
    r30 = *(0x18 + r1); // lwz @ 0x80604C80
    r29 = *(0x14 + r1); // lwz @ 0x80604C84
    r28 = *(0x10 + r1); // lwz @ 0x80604C88
    r0 = *(0x24 + r1); // lwz @ 0x80604C8C
    return;
}
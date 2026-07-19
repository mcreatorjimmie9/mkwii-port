/* Function at 0x80604D54, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80604D54(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x80604D5C
    r5 = r5 + 0; // 0x80604D64
    *(0x1c + r1) = r31; // stw @ 0x80604D68
    r31 = r5 + 0x5f; // 0x80604D6C
    *(0x18 + r1) = r30; // stw @ 0x80604D70
    /* li r30, 0 */ // 0x80604D74
    *(0x14 + r1) = r29; // stw @ 0x80604D78
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80604D80
    r28 = r3;
    r4 = r28;
    r3 = r31;
    FUN_805EB784(r4, r3); // bl 0x805EB784
    if (==) goto 0x0x80604de8;
    r0 = *(0x10 + r28); // lbz @ 0x80604D9C
    if (==) goto 0x0x80604dbc;
    r0 = *(4 + r29); // lwz @ 0x80604DA8
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x80604DAC
    if (!=) goto 0x0x80604dbc;
    /* li r0, 1 */ // 0x80604DB4
    *(0x24 + r29) = r0; // stw @ 0x80604DB8
    r3 = r29;
    r4 = r31;
    r5 = r28;
    /* li r6, 0 */ // 0x80604DC8
    FUN_805EBE08(r3, r4, r5, r6); // bl 0x805EBE08
    r4 = *(0xc + r28); // lwz @ 0x80604DD0
    if (==) goto 0x0x80604de4;
    r3 = r29;
    FUN_805EEFD4(r3); // bl 0x805EEFD4
    /* li r30, 1 */ // 0x80604DE4
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x80604DEC
    r30 = *(0x18 + r1); // lwz @ 0x80604DF0
    r29 = *(0x14 + r1); // lwz @ 0x80604DF4
    r28 = *(0x10 + r1); // lwz @ 0x80604DF8
    r0 = *(0x24 + r1); // lwz @ 0x80604DFC
    return;
}
/* Function at 0x8060DC74, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8060DC74(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8060DC80
    r31 = r3;
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r5, 0 */ // 0x8060DC8C
    /* lis r4, 0 */ // 0x8060DC90
    r5 = *(0 + r5); // lwz @ 0x8060DC94
    r0 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x8060DC9C
    /* li r3, 0 */ // 0x8060DCA0
    r6 = *(0xc + r5); // lwz @ 0x8060DCA4
    /* li r5, 0 */ // 0x8060DCA8
    r4 = *(0xb70 + r4); // lwz @ 0x8060DCAC
    /* lwzx r6, r6, r0 */ // 0x8060DCB0
    r0 = r4 + -3; // 0x8060DCB4
    r6 = *(0x20 + r6); // lbz @ 0x8060DCBC
    if (>) goto 0x0x8060dcd8;
    /* li r4, 1 */ // 0x8060DCC4
    r0 = r4 << r0; // slw
    /* andi. r0, r0, 0xc1 */ // 0x8060DCCC
    if (==) goto 0x0x8060dcd8;
    r5 = r4;
    if (==) goto 0x0x8060dcf8;
    r3 = r31;
    /* li r4, 0x1c2 */ // 0x8060DCE4
    /* li r5, 0 */ // 0x8060DCE8
    /* li r6, 0 */ // 0x8060DCEC
    FUN_8060DFB4(r3, r4, r5, r6); // bl 0x8060DFB4
    /* b 0x8060dd44 */ // 0x8060DCF4
    if (==) goto 0x0x8060dd44;
    if (>) goto 0x0x8060dd44;
    /* lis r3, 0 */ // 0x8060DD08
    r0 = r6 + 0xb; // 0x8060DD0C
    r5 = *(0 + r3); // lwz @ 0x8060DD10
    /* lis r4, 0 */ // 0x8060DD14
    r4 = r4 + 0; // 0x8060DD18
    r3 = r31;
    r7 = *(0x24 + r5); // lbz @ 0x8060DD20
    /* li r5, 0 */ // 0x8060DD24
    /* li r6, 0 */ // 0x8060DD28
    /* subf r0, r7, r0 */ // 0x8060DD2C
    /* slwi r0, r0, 1 */ // 0x8060DD30
    /* lhax r4, r4, r0 */ // 0x8060DD34
    r0 = r4 + 0x48; // 0x8060DD38
    /* extsh r4, r0 */ // 0x8060DD3C
    FUN_8060DFB4(); // bl 0x8060DFB4
    r0 = *(0x14 + r1); // lwz @ 0x8060DD44
    r31 = *(0xc + r1); // lwz @ 0x8060DD48
    return;
}
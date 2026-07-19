/* Function at 0x806864D4, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_806864D4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x806864E4
    *(0x14 + r1) = r29; // stw @ 0x806864EC
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806864F4
    r28 = r3;
    /* b 0x80686550 */ // 0x806864FC
    r30 = r3 + -1; // 0x80686500
    /* slwi r0, r30, 2 */ // 0x80686504
    r3 = r28 + r0; // 0x80686508
    r3 = *(0x354 + r3); // lwz @ 0x8068650C
    FUN_80671704(); // bl 0x80671704
    r3 = *(0x37c + r28); // lwz @ 0x80686514
    r0 = r3 + -1; // 0x80686518
    if (!=) goto 0x0x80686550;
    /* slwi r0, r3, 2 */ // 0x80686524
    r3 = r28 + r0; // 0x80686528
    r3 = *(0x350 + r3); // lwz @ 0x8068652C
    FUN_806713C8(); // bl 0x806713C8
    r0 = *(0x37c + r28); // lwz @ 0x80686534
    /* slwi r0, r0, 2 */ // 0x80686538
    r3 = r28 + r0; // 0x8068653C
    *(0x354 + r3) = r31; // stw @ 0x80686540
    r3 = *(0x37c + r28); // lwz @ 0x80686544
    r0 = r3 + -1; // 0x80686548
    *(0x37c + r28) = r0; // stw @ 0x8068654C
    r3 = *(0x37c + r28); // lwz @ 0x80686550
    if (>) goto 0x0x80686500;
    r0 = *(0x24 + r1); // lwz @ 0x8068655C
    r31 = *(0x1c + r1); // lwz @ 0x80686560
    r30 = *(0x18 + r1); // lwz @ 0x80686564
    r29 = *(0x14 + r1); // lwz @ 0x80686568
    r28 = *(0x10 + r1); // lwz @ 0x8068656C
    return;
}
/* Function at 0x806AF678, size=228 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_806AF678(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x806AF680
    *(0x14 + r1) = r29; // stw @ 0x806AF690
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806AF698
    r28 = r3;
    r3 = *(0 + r5); // lwz @ 0x806AF6A0
    r3 = *(0 + r3); // lwz @ 0x806AF6A4
    r30 = *(0x124 + r3); // lwz @ 0x806AF6A8
    if (!=) goto 0x0x806af6bc;
    /* li r30, 0 */ // 0x806AF6B4
    /* b 0x806af710 */ // 0x806AF6B8
    /* lis r31, 0 */ // 0x806AF6BC
    r31 = r31 + 0; // 0x806AF6C0
    if (==) goto 0x0x806af70c;
    r12 = *(0 + r30); // lwz @ 0x806AF6C8
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806AF6D0
    /* mtctr r12 */ // 0x806AF6D4
    /* bctrl  */ // 0x806AF6D8
    /* b 0x806af6f4 */ // 0x806AF6DC
    if (!=) goto 0x0x806af6f0;
    /* li r0, 1 */ // 0x806AF6E8
    /* b 0x806af700 */ // 0x806AF6EC
    r3 = *(0 + r3); // lwz @ 0x806AF6F0
    if (!=) goto 0x0x806af6e0;
    /* li r0, 0 */ // 0x806AF6FC
    if (==) goto 0x0x806af70c;
    /* b 0x806af710 */ // 0x806AF708
    /* li r30, 0 */ // 0x806AF70C
    /* li r0, 0 */ // 0x806AF710
    *(0x6c + r30) = r0; // stw @ 0x806AF714
    /* li r0, 0x47 */ // 0x806AF718
    r3 = r29;
    *(0xb14 + r28) = r0; // stw @ 0x806AF720
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 0 */ // 0x806AF72C
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* li r0, 1 */ // 0x806AF734
    *(0xb18 + r28) = r0; // stb @ 0x806AF738
    r31 = *(0x1c + r1); // lwz @ 0x806AF73C
    r30 = *(0x18 + r1); // lwz @ 0x806AF740
    r29 = *(0x14 + r1); // lwz @ 0x806AF744
    r28 = *(0x10 + r1); // lwz @ 0x806AF748
    r0 = *(0x24 + r1); // lwz @ 0x806AF74C
    return;
}
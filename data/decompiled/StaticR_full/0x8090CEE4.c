/* Function at 0x8090CEE4, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8090CEE4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x8090CEFC
    r28 = r3;
    r0 = *(0x10c + r3); // lhz @ 0x8090CF04
    if (!=) goto 0x0x8090cf28;
    /* lis r4, 0 */ // 0x8090CF10
    /* lis r3, 0 */ // 0x8090CF14
    /* li r5, 0 */ // 0x8090CF18
    /* li r0, 1 */ // 0x8090CF1C
    *(0 + r4) = r5; // sth @ 0x8090CF20
    *(0 + r3) = r0; // sth @ 0x8090CF24
    /* li r30, 0 */ // 0x8090CF28
    /* li r29, 0 */ // 0x8090CF2C
    /* li r31, 0 */ // 0x8090CF30
    /* b 0x8090cf6c */ // 0x8090CF34
    r0 = *(0x108 + r28); // lwz @ 0x8090CF38
    r3 = r0 + r29; // 0x8090CF3C
    *(8 + r3) = r31; // stw @ 0x8090CF40
    r3 = *(0x108 + r28); // lwz @ 0x8090CF44
    /* lwzx r3, r3, r29 */ // 0x8090CF48
    if (==) goto 0x0x8090cf64;
    r12 = *(0 + r3); // lwz @ 0x8090CF54
    r12 = *(0x10 + r12); // lwz @ 0x8090CF58
    /* mtctr r12 */ // 0x8090CF5C
    /* bctrl  */ // 0x8090CF60
    r29 = r29 + 0x64; // 0x8090CF64
    r30 = r30 + 1; // 0x8090CF68
    r0 = *(0x104 + r28); // lwz @ 0x8090CF6C
    if (<) goto 0x0x8090cf38;
    /* li r0, 0 */ // 0x8090CF78
    *(0x114 + r28) = r0; // stw @ 0x8090CF7C
    r3 = r28;
    /* li r4, 0 */ // 0x8090CF84
    *(0x118 + r28) = r0; // stw @ 0x8090CF88
    *(0x11c + r28) = r0; // stw @ 0x8090CF8C
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r0 = *(0x24 + r1); // lwz @ 0x8090CF94
    r31 = *(0x1c + r1); // lwz @ 0x8090CF98
    r30 = *(0x18 + r1); // lwz @ 0x8090CF9C
    r29 = *(0x14 + r1); // lwz @ 0x8090CFA0
    r28 = *(0x10 + r1); // lwz @ 0x8090CFA4
    return;
}
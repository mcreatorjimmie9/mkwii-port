/* Function at 0x806D9B1C, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806D9B1C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806D9B24
    *(0x18 + r1) = r30; // stw @ 0x806D9B30
    *(0x14 + r1) = r29; // stw @ 0x806D9B34
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806D9B3C
    r3 = *(0 + r3); // lwz @ 0x806D9B40
    r30 = *(0x150 + r3); // lwz @ 0x806D9B44
    if (!=) goto 0x0x806d9b58;
    /* li r30, 0 */ // 0x806D9B50
    /* b 0x806d9bac */ // 0x806D9B54
    /* lis r31, 0 */ // 0x806D9B58
    r31 = r31 + 0; // 0x806D9B5C
    if (==) goto 0x0x806d9ba8;
    r12 = *(0 + r30); // lwz @ 0x806D9B64
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D9B6C
    /* mtctr r12 */ // 0x806D9B70
    /* bctrl  */ // 0x806D9B74
    /* b 0x806d9b90 */ // 0x806D9B78
    if (!=) goto 0x0x806d9b8c;
    /* li r0, 1 */ // 0x806D9B84
    /* b 0x806d9b9c */ // 0x806D9B88
    r3 = *(0 + r3); // lwz @ 0x806D9B8C
    if (!=) goto 0x0x806d9b7c;
    /* li r0, 0 */ // 0x806D9B98
    if (==) goto 0x0x806d9ba8;
    /* b 0x806d9bac */ // 0x806D9BA4
    /* li r30, 0 */ // 0x806D9BA8
    r12 = *(0 + r30); // lwz @ 0x806D9BAC
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806D9BB4
    /* mtctr r12 */ // 0x806D9BB8
    /* bctrl  */ // 0x806D9BBC
    r3 = r30;
    /* li r4, 0x17eb */ // 0x806D9BC4
    /* li r5, 0 */ // 0x806D9BC8
    FUN_8064D8BC(r3, r4, r5); // bl 0x8064D8BC
    r3 = r30;
    /* li r4, 0x17e9 */ // 0x806D9BD4
    /* li r5, 0 */ // 0x806D9BD8
    FUN_8064D8C4(r5, r3, r4, r5); // bl 0x8064D8C4
    /* li r0, 0 */ // 0x806D9BE0
    *(0x820 + r30) = r0; // stw @ 0x806D9BE4
    r3 = r29;
    /* li r4, 0x52 */ // 0x806D9BEC
    r12 = *(0 + r29); // lwz @ 0x806D9BF0
    /* li r5, 0 */ // 0x806D9BF4
    r12 = *(0x24 + r12); // lwz @ 0x806D9BF8
    /* mtctr r12 */ // 0x806D9BFC
    /* bctrl  */ // 0x806D9C00
    /* li r0, 1 */ // 0x806D9C04
    *(0x2874 + r29) = r0; // stw @ 0x806D9C08
    r31 = *(0x1c + r1); // lwz @ 0x806D9C0C
    r30 = *(0x18 + r1); // lwz @ 0x806D9C10
    r29 = *(0x14 + r1); // lwz @ 0x806D9C14
    r0 = *(0x24 + r1); // lwz @ 0x806D9C18
    return;
}
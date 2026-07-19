/* Function at 0x8069BE4C, size=276 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8069BE4C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8069BE60
    r29 = r3;
    r0 = *(8 + r3); // lwz @ 0x8069BE68
    if (!=) goto 0x0x8069bf44;
    r0 = *(0x58 + r3); // lwz @ 0x8069BE74
    if (==) goto 0x0x8069be94;
    if (==) goto 0x0x8069bf20;
    if (==) goto 0x0x8069bf34;
    /* b 0x8069bf44 */ // 0x8069BE90
    /* lis r3, 0 */ // 0x8069BE94
    r3 = *(0 + r3); // lwz @ 0x8069BE98
    r3 = *(0 + r3); // lwz @ 0x8069BE9C
    r30 = *(0x2a4 + r3); // lwz @ 0x8069BEA0
    if (!=) goto 0x0x8069beb4;
    /* li r30, 0 */ // 0x8069BEAC
    /* b 0x8069bf08 */ // 0x8069BEB0
    /* lis r31, 0 */ // 0x8069BEB4
    r31 = r31 + 0; // 0x8069BEB8
    if (==) goto 0x0x8069bf04;
    r12 = *(0 + r30); // lwz @ 0x8069BEC0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8069BEC8
    /* mtctr r12 */ // 0x8069BECC
    /* bctrl  */ // 0x8069BED0
    /* b 0x8069beec */ // 0x8069BED4
    if (!=) goto 0x0x8069bee8;
    /* li r0, 1 */ // 0x8069BEE0
    /* b 0x8069bef8 */ // 0x8069BEE4
    r3 = *(0 + r3); // lwz @ 0x8069BEE8
    if (!=) goto 0x0x8069bed8;
    /* li r0, 0 */ // 0x8069BEF4
    if (==) goto 0x0x8069bf04;
    /* b 0x8069bf08 */ // 0x8069BF00
    /* li r30, 0 */ // 0x8069BF04
    r0 = *(0x94 + r30); // lwz @ 0x8069BF08
    if (!=) goto 0x0x8069bf44;
    r3 = r29;
    FUN_8069C0C8(r3); // bl 0x8069C0C8
    /* b 0x8069bf44 */ // 0x8069BF1C
    /* lis r5, 0 */ // 0x8069BF20
    /* li r4, 0 */ // 0x8069BF24
    /* lfs f1, 0(r5) */ // 0x8069BF28
    FUN_80671C48(r5, r4); // bl 0x80671C48
    /* b 0x8069bf44 */ // 0x8069BF30
    /* lis r5, 0 */ // 0x8069BF34
    /* li r4, 1 */ // 0x8069BF38
    /* lfs f1, 0(r5) */ // 0x8069BF3C
    FUN_80671C48(r5, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x8069BF44
    r31 = *(0x1c + r1); // lwz @ 0x8069BF48
    r30 = *(0x18 + r1); // lwz @ 0x8069BF4C
    r29 = *(0x14 + r1); // lwz @ 0x8069BF50
    return;
}
/* Function at 0x806ABEF0, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806ABEF0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806ABEF8
    *(0x18 + r1) = r30; // stw @ 0x806ABF04
    *(0x14 + r1) = r29; // stw @ 0x806ABF08
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806ABF10
    r3 = *(0 + r3); // lwz @ 0x806ABF14
    r30 = *(0x150 + r3); // lwz @ 0x806ABF18
    if (!=) goto 0x0x806abf2c;
    /* li r30, 0 */ // 0x806ABF24
    /* b 0x806abf80 */ // 0x806ABF28
    /* lis r31, 0 */ // 0x806ABF2C
    r31 = r31 + 0; // 0x806ABF30
    if (==) goto 0x0x806abf7c;
    r12 = *(0 + r30); // lwz @ 0x806ABF38
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806ABF40
    /* mtctr r12 */ // 0x806ABF44
    /* bctrl  */ // 0x806ABF48
    /* b 0x806abf64 */ // 0x806ABF4C
    if (!=) goto 0x0x806abf60;
    /* li r0, 1 */ // 0x806ABF58
    /* b 0x806abf70 */ // 0x806ABF5C
    r3 = *(0 + r3); // lwz @ 0x806ABF60
    if (!=) goto 0x0x806abf50;
    /* li r0, 0 */ // 0x806ABF6C
    if (==) goto 0x0x806abf7c;
    /* b 0x806abf80 */ // 0x806ABF78
    /* li r30, 0 */ // 0x806ABF7C
    /* lis r3, 0 */ // 0x806ABF80
    r4 = *(0x10 + r30); // lwz @ 0x806ABF84
    /* lfs f1, 0(r3) */ // 0x806ABF88
    r3 = r29;
    FUN_80671C48(r3, r3); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x806ABF94
    r31 = *(0x1c + r1); // lwz @ 0x806ABF98
    r30 = *(0x18 + r1); // lwz @ 0x806ABF9C
    r29 = *(0x14 + r1); // lwz @ 0x806ABFA0
    return;
}
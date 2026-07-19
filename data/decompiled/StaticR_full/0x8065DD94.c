/* Function at 0x8065DD94, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8065DD94(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8065DDA4
    r0 = *(0x10 + r3); // lwz @ 0x8065DDA8
    if (!=) goto 0x0x8065de34;
    /* lis r3, 0 */ // 0x8065DDB4
    r3 = *(0 + r3); // lwz @ 0x8065DDB8
    r3 = *(0 + r3); // lwz @ 0x8065DDBC
    r30 = *(0x25c + r3); // lwz @ 0x8065DDC0
    if (!=) goto 0x0x8065ddd4;
    /* li r30, 0 */ // 0x8065DDCC
    /* b 0x8065de28 */ // 0x8065DDD0
    /* lis r31, 0 */ // 0x8065DDD4
    r31 = r31 + 0; // 0x8065DDD8
    if (==) goto 0x0x8065de24;
    r12 = *(0 + r30); // lwz @ 0x8065DDE0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8065DDE8
    /* mtctr r12 */ // 0x8065DDEC
    /* bctrl  */ // 0x8065DDF0
    /* b 0x8065de0c */ // 0x8065DDF4
    if (!=) goto 0x0x8065de08;
    /* li r0, 1 */ // 0x8065DE00
    /* b 0x8065de18 */ // 0x8065DE04
    r3 = *(0 + r3); // lwz @ 0x8065DE08
    if (!=) goto 0x0x8065ddf8;
    /* li r0, 0 */ // 0x8065DE14
    if (==) goto 0x0x8065de24;
    /* b 0x8065de28 */ // 0x8065DE20
    /* li r30, 0 */ // 0x8065DE24
    r3 = r30;
    /* li r4, 1 */ // 0x8065DE2C
    FUN_80663AB4(r3, r4); // bl 0x80663AB4
    r0 = *(0x14 + r1); // lwz @ 0x8065DE34
    r31 = *(0xc + r1); // lwz @ 0x8065DE38
    r30 = *(8 + r1); // lwz @ 0x8065DE3C
    return;
}
/* Function at 0x805B2B6C, size=360 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805B2B6C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805B2B80
    *(0x14 + r1) = r29; // stw @ 0x805B2B84
    r0 = *(0x14 + r3); // lwz @ 0x805B2B88
    if (==) goto 0x0x805b2b9c;
    /* li r3, 0 */ // 0x805B2B94
    /* b 0x805b2cb8 */ // 0x805B2B98
    r30 = *(8 + r3); // lwz @ 0x805B2B9C
    /* li r29, 0 */ // 0x805B2BA0
    if (>=) goto 0x0x805b2bbc;
    /* li r0, 0 */ // 0x805B2BAC
    *(8 + r3) = r0; // stw @ 0x805B2BB0
    /* li r29, 1 */ // 0x805B2BB4
    /* b 0x805b2c40 */ // 0x805B2BB8
    if (>=) goto 0x0x805b2bc8;
    /* li r4, 0 */ // 0x805B2BC0
    /* b 0x805b2be4 */ // 0x805B2BC4
    r12 = *(0 + r3); // lwz @ 0x805B2BC8
    r12 = *(0x10 + r12); // lwz @ 0x805B2BCC
    /* mtctr r12 */ // 0x805B2BD0
    /* bctrl  */ // 0x805B2BD4
    r3 = r30 * r3; // 0x805B2BD8
    r0 = *(4 + r31); // lwz @ 0x805B2BDC
    r4 = r0 + r3; // 0x805B2BE0
    r12 = *(0 + r31); // lwz @ 0x805B2BE4
    r3 = r31;
    r12 = *(0x24 + r12); // lwz @ 0x805B2BEC
    /* mtctr r12 */ // 0x805B2BF0
    /* bctrl  */ // 0x805B2BF4
    if (==) goto 0x0x805b2c40;
    r4 = *(8 + r31); // lwz @ 0x805B2C00
    r3 = r31;
    /* li r29, 1 */ // 0x805B2C08
    r0 = r4 + 1; // 0x805B2C0C
    *(8 + r31) = r0; // stw @ 0x805B2C10
    r12 = *(0 + r31); // lwz @ 0x805B2C14
    r12 = *(0x10 + r12); // lwz @ 0x805B2C18
    /* mtctr r12 */ // 0x805B2C1C
    /* bctrl  */ // 0x805B2C20
    r4 = *(8 + r31); // lwz @ 0x805B2C24
    r0 = *(0xc + r31); // lwz @ 0x805B2C28
    r3 = r4 * r3; // 0x805B2C2C
    if (<) goto 0x0x805b2c40;
    /* li r0, 2 */ // 0x805B2C38
    *(0x14 + r31) = r0; // stw @ 0x805B2C3C
    r0 = *(0x14 + r31); // lwz @ 0x805B2C40
    if (!=) goto 0x0x805b2cb4;
    r30 = *(8 + r31); // lwz @ 0x805B2C4C
    if (>=) goto 0x0x805b2c60;
    /* li r4, 0 */ // 0x805B2C58
    /* b 0x805b2c80 */ // 0x805B2C5C
    r12 = *(0 + r31); // lwz @ 0x805B2C60
    r3 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x805B2C68
    /* mtctr r12 */ // 0x805B2C6C
    /* bctrl  */ // 0x805B2C70
    r3 = r30 * r3; // 0x805B2C74
    r0 = *(4 + r31); // lwz @ 0x805B2C78
    r4 = r0 + r3; // 0x805B2C7C
    if (==) goto 0x0x805b2c90;
    /* li r0, 0 */ // 0x805B2C88
    *(0x10 + r31) = r0; // sth @ 0x805B2C8C
    r5 = *(0x10 + r31); // lha @ 0x805B2C90
    r3 = r31;
    r0 = r5 + 1; // 0x805B2C98
    *(0x10 + r31) = r0; // sth @ 0x805B2C9C
    r12 = *(0 + r31); // lwz @ 0x805B2CA0
    r12 = *(0x20 + r12); // lwz @ 0x805B2CA4
    /* mtctr r12 */ // 0x805B2CA8
    /* bctrl  */ // 0x805B2CAC
    /* b 0x805b2cb8 */ // 0x805B2CB0
    /* li r3, 0 */ // 0x805B2CB4
    r0 = *(0x24 + r1); // lwz @ 0x805B2CB8
    r31 = *(0x1c + r1); // lwz @ 0x805B2CBC
    r30 = *(0x18 + r1); // lwz @ 0x805B2CC0
    r29 = *(0x14 + r1); // lwz @ 0x805B2CC4
    return;
}
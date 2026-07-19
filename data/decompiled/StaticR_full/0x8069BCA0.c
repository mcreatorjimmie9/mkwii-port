/* Function at 0x8069BCA0, size=420 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8069BCA0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x8069BCA8
    /* li r0, -1 */ // 0x8069BCB0
    *(0x1c + r1) = r31; // stw @ 0x8069BCB4
    *(0x18 + r1) = r30; // stw @ 0x8069BCB8
    *(0x14 + r1) = r29; // stw @ 0x8069BCBC
    r29 = r3;
    *(0x58 + r3) = r4; // stw @ 0x8069BCC4
    /* lis r4, 0 */ // 0x8069BCC8
    *(0x54 + r3) = r0; // stw @ 0x8069BCCC
    r3 = *(0 + r4); // lwz @ 0x8069BCD0
    r3 = *(0 + r3); // lwz @ 0x8069BCD4
    r30 = *(0x2a4 + r3); // lwz @ 0x8069BCD8
    if (!=) goto 0x0x8069bcec;
    /* li r30, 0 */ // 0x8069BCE4
    /* b 0x8069bd40 */ // 0x8069BCE8
    /* lis r31, 0 */ // 0x8069BCEC
    r31 = r31 + 0; // 0x8069BCF0
    if (==) goto 0x0x8069bd3c;
    r12 = *(0 + r30); // lwz @ 0x8069BCF8
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8069BD00
    /* mtctr r12 */ // 0x8069BD04
    /* bctrl  */ // 0x8069BD08
    /* b 0x8069bd24 */ // 0x8069BD0C
    if (!=) goto 0x0x8069bd20;
    /* li r0, 1 */ // 0x8069BD18
    /* b 0x8069bd30 */ // 0x8069BD1C
    r3 = *(0 + r3); // lwz @ 0x8069BD20
    if (!=) goto 0x0x8069bd10;
    /* li r0, 0 */ // 0x8069BD2C
    if (==) goto 0x0x8069bd3c;
    /* b 0x8069bd40 */ // 0x8069BD38
    /* li r30, 0 */ // 0x8069BD3C
    r0 = *(0x94 + r30); // lwz @ 0x8069BD40
    if (==) goto 0x0x8069be20;
    /* lis r3, 0 */ // 0x8069BD4C
    r3 = *(0 + r3); // lwz @ 0x8069BD50
    r3 = *(0 + r3); // lwz @ 0x8069BD54
    r30 = *(0x144 + r3); // lwz @ 0x8069BD58
    if (!=) goto 0x0x8069bd6c;
    /* li r30, 0 */ // 0x8069BD64
    /* b 0x8069bdc0 */ // 0x8069BD68
    /* lis r31, 0 */ // 0x8069BD6C
    r31 = r31 + 0; // 0x8069BD70
    if (==) goto 0x0x8069bdbc;
    r12 = *(0 + r30); // lwz @ 0x8069BD78
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8069BD80
    /* mtctr r12 */ // 0x8069BD84
    /* bctrl  */ // 0x8069BD88
    /* b 0x8069bda4 */ // 0x8069BD8C
    if (!=) goto 0x0x8069bda0;
    /* li r0, 1 */ // 0x8069BD98
    /* b 0x8069bdb0 */ // 0x8069BD9C
    r3 = *(0 + r3); // lwz @ 0x8069BDA0
    if (!=) goto 0x0x8069bd90;
    /* li r0, 0 */ // 0x8069BDAC
    if (==) goto 0x0x8069bdbc;
    /* b 0x8069bdc0 */ // 0x8069BDB8
    /* li r30, 0 */ // 0x8069BDBC
    r12 = *(0 + r30); // lwz @ 0x8069BDC0
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x8069BDC8
    /* mtctr r12 */ // 0x8069BDCC
    /* bctrl  */ // 0x8069BDD0
    r12 = *(0 + r30); // lwz @ 0x8069BDD4
    r3 = r30;
    /* li r4, 0x157c */ // 0x8069BDDC
    /* li r5, 0 */ // 0x8069BDE0
    r12 = *(0x68 + r12); // lwz @ 0x8069BDE4
    /* mtctr r12 */ // 0x8069BDE8
    /* bctrl  */ // 0x8069BDEC
    /* li r0, -1 */ // 0x8069BDF0
    *(0x344 + r30) = r0; // stw @ 0x8069BDF4
    r3 = r29;
    /* li r4, 0x4f */ // 0x8069BDFC
    r12 = *(0 + r29); // lwz @ 0x8069BE00
    /* li r5, 0 */ // 0x8069BE04
    r12 = *(0x24 + r12); // lwz @ 0x8069BE08
    /* mtctr r12 */ // 0x8069BE0C
    /* bctrl  */ // 0x8069BE10
    /* li r0, 1 */ // 0x8069BE14
    *(0x58 + r29) = r0; // stw @ 0x8069BE18
    /* b 0x8069be28 */ // 0x8069BE1C
    r3 = r29;
    FUN_8069C0C8(r3); // bl 0x8069C0C8
    r0 = *(0x24 + r1); // lwz @ 0x8069BE28
    r31 = *(0x1c + r1); // lwz @ 0x8069BE2C
    r30 = *(0x18 + r1); // lwz @ 0x8069BE30
    r29 = *(0x14 + r1); // lwz @ 0x8069BE34
    return;
}
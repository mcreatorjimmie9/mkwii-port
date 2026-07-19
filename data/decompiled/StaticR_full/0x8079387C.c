/* Function at 0x8079387C, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8079387C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80793890
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80793898
    r29 = r3;
    if (>=) goto 0x0x807938c8;
    /* slwi r0, r5, 2 */ // 0x807938A4
    r31 = r3 + r0; // 0x807938A8
    r3 = *(0x80 + r31); // lwzu @ 0x807938AC
    if (==) goto 0x0x807938cc;
    if (==) goto 0x0x807938cc;
    /* li r4, 0 */ // 0x807938BC
    FUN_805E3430(r4); // bl 0x805E3430
    /* b 0x807938cc */ // 0x807938C4
    /* li r31, 0 */ // 0x807938C8
    if (==) goto 0x0x807938f0;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x807938E0
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x807938f4 */ // 0x807938EC
    /* li r3, 0 */ // 0x807938F0
    r0 = *(0x24 + r1); // lwz @ 0x807938F4
    r31 = *(0x1c + r1); // lwz @ 0x807938F8
    r30 = *(0x18 + r1); // lwz @ 0x807938FC
    r29 = *(0x14 + r1); // lwz @ 0x80793900
}
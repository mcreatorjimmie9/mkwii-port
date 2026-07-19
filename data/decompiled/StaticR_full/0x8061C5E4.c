/* Function at 0x8061C5E4, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8061C5E4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8061C5EC
    /* li r0, 0 */ // 0x8061C5F4
    *(0xc + r1) = r31; // stw @ 0x8061C5F8
    *(8 + r1) = r30; // stw @ 0x8061C5FC
    r30 = r3;
    *(0x58 + r3) = r0; // stw @ 0x8061C604
    *(0x5c + r3) = r0; // stw @ 0x8061C608
    r0 = *(0 + r4); // lbz @ 0x8061C60C
    if (==) goto 0x0x8061c65c;
    /* li r3, 0x5c */ // 0x8061C618
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x8061c654;
    /* li r3, 0x28 */ // 0x8061C62C
    FUN_805E3430(r3); // bl 0x805E3430
    r4 = r3;
    if (==) goto 0x0x8061c648;
    FUN_8061AC48(r3, r4); // bl 0x8061AC48
    r4 = r3;
    r3 = r31;
    FUN_8061A2A4(r4, r4, r3); // bl 0x8061A2A4
}
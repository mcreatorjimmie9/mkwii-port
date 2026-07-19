/* Function at 0x8063C5E8, size=108 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8063C5E8(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 0x80 */ // 0x8063C5F4
    *(0x28 + r1) = r30; // stw @ 0x8063C5FC
    *(0x24 + r1) = r29; // stw @ 0x8063C600
    r29 = r3;
    *(0x10 + r1) = r0; // stw @ 0x8063C608
    /* li r0, 1 */ // 0x8063C60C
    r3 = *(0x10 + r4); // lwz @ 0x8063C610
    r4 = *(4 + r3); // lwz @ 0x8063C614
    if (==) goto 0x0x8063c62c;
    if (==) goto 0x0x8063c62c;
    /* li r0, 0 */ // 0x8063C628
    if (==) goto 0x0x8063c63c;
    r30 = *(0 + r3); // lwz @ 0x8063C634
    /* b 0x8063c640 */ // 0x8063C638
    /* li r30, 0 */ // 0x8063C63C
    /* lis r4, 0 */ // 0x8063C640
    /* li r3, 0x20 */ // 0x8063C644
    r4 = r4 + 0; // 0x8063C648
    /* li r5, 2 */ // 0x8063C64C
    FUN_805E3430(r4, r3, r4, r5); // bl 0x805E3430
}
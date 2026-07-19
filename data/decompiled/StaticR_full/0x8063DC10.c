/* Function at 0x8063DC10, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8063DC10(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8063DC20
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8063DC28
    r30 = r3;
    if (==) goto 0x0x8063dc54;
    if (==) goto 0x0x8063dc44;
    if (==) goto 0x0x8063dc44;
    /* li r4, 0 */ // 0x8063DC3C
    FUN_805F40EC(r4); // bl 0x805F40EC
    if (<=) goto 0x0x8063dc54;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8063DC58
    r30 = *(8 + r1); // lwz @ 0x8063DC5C
    r0 = *(0x14 + r1); // lwz @ 0x8063DC60
    return;
}
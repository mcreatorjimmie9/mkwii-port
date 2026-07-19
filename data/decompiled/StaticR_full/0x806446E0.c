/* Function at 0x806446E0, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806446E0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806446F4
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806446FC
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r4, 0 */ // 0x80644704
    /* li r3, 0x4c */ // 0x80644708
    r4 = r4 + 0; // 0x8064470C
    *(0xc + r31) = r4; // stw @ 0x80644710
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}
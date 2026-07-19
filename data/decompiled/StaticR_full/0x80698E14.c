/* Function at 0x80698E14, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80698E14(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 4 */ // 0x80698E1C
    /* li r5, 0 */ // 0x80698E20
    *(0x14 + r1) = r0; // stw @ 0x80698E24
    *(0xc + r1) = r31; // stw @ 0x80698E28
    r31 = r3;
    FUN_80698C44(r4, r5); // bl 0x80698C44
    r3 = r31;
    /* li r4, 0 */ // 0x80698E38
    /* li r5, 0xff */ // 0x80698E3C
    FUN_80698CD0(r3, r4, r5); // bl 0x80698CD0
    /* lis r31, 0 */ // 0x80698E44
    r3 = *(0 + r31); // lwz @ 0x80698E48
    FUN_805E3430(r4, r5); // bl 0x805E3430
}
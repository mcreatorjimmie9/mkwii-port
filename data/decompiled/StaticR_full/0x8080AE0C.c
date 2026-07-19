/* Function at 0x8080AE0C, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8080AE0C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8080AE14
    *(0x14 + r1) = r0; // stw @ 0x8080AE18
    *(0xc + r1) = r31; // stw @ 0x8080AE1C
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x8080AE24
    r0 = *(0x25 + r3); // lbz @ 0x8080AE28
    if (<=) goto 0x0x8080ae84;
    /* li r3, 0x7c */ // 0x8080AE34
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8080ae54;
}
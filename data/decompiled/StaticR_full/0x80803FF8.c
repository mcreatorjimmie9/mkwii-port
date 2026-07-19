/* Function at 0x80803FF8, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80803FF8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80804008
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80804010
    r30 = r3;
    if (==) goto 0x0x8080405c;
    /* addic. r0, r3, 0xb0 */ // 0x8080401C
    if (==) goto 0x0x8080404c;
    r0 = *(0xb8 + r3); // lwz @ 0x80804024
    /* lis r4, 0 */ // 0x80804028
    r4 = r4 + 0; // 0x8080402C
    *(0xb0 + r3) = r4; // stw @ 0x80804030
    if (==) goto 0x0x8080404c;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x80804044
    *(0xb8 + r30) = r0; // stw @ 0x80804048
    if (<=) goto 0x0x8080405c;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80804060
    r30 = *(8 + r1); // lwz @ 0x80804064
    r0 = *(0x14 + r1); // lwz @ 0x80804068
}
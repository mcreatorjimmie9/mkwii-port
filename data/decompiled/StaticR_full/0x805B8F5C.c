/* Function at 0x805B8F5C, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805B8F5C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x1c + r1) = r31; // stw @ 0x805B8F6C
    *(0x18 + r1) = r30; // stw @ 0x805B8F70
    r30 = r4;
    if (!=) goto 0x0x805b8f84;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r5 = *(0xc94 + r3); // lwz @ 0x805B8F80
    r4 = r5;
    /* li r3, 0xb8 */ // 0x805B8F88
    /* li r5, 4 */ // 0x805B8F8C
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
}
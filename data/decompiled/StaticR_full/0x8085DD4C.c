/* Function at 0x8085DD4C, size=132 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8085DD4C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x38 + r1) = r30; // stw @ 0x8085DD60
    r30 = r3;
    r0 = *(0x23e + r3); // lbz @ 0x8085DD68
    if (!=) goto 0x0x8085ddb8;
    /* addic. r0, r1, 8 */ // 0x8085DD74
    if (==) goto 0x0x8085dd88;
    r3 = *(0 + r4); // lwz @ 0x8085DD7C
    r4 = r0;
    FUN_805E3430(r4); // bl 0x805E3430
    r0 = *(0x28c + r30); // lbz @ 0x8085DD88
    if (==) goto 0x0x8085ddac;
    r3 = r30;
    r6 = r30 + 0x294; // 0x8085DD9C
    /* li r5, 2 */ // 0x8085DDA0
    /* li r7, 1 */ // 0x8085DDA4
    FUN_8085CBC8(r3, r4, r6, r5, r7); // bl 0x8085CBC8
    r4 = *(0 + r31); // lwz @ 0x8085DDAC
    FUN_805E3430(r5, r7, r3); // bl 0x805E3430
    r0 = *(0x44 + r1); // lwz @ 0x8085DDB8
    r31 = *(0x3c + r1); // lwz @ 0x8085DDBC
    r30 = *(0x38 + r1); // lwz @ 0x8085DDC0
    return;
}
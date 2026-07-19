/* Function at 0x806F5BA0, size=88 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r21 */
/* Calls: 1 function(s) */

int FUN_806F5BA0(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r21 */
    /* stmw r21, 0x14(r1) */ // 0x806F5BAC
    r22 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x806F5BB4
    if (!=) goto 0x0x806f605c;
    r0 = *(0x7578 + r3); // lwz @ 0x806F5BC0
    if (>) goto 0x0x806f605c;
    /* lis r4, 0 */ // 0x806F5BCC
    /* slwi r0, r0, 2 */ // 0x806F5BD0
    r4 = r4 + 0; // 0x806F5BD4
    /* lwzx r4, r4, r0 */ // 0x806F5BD8
    /* mtctr r4 */ // 0x806F5BDC
    /* bctr  */ // 0x806F5BE0
    r3 = *(0x2c + r3); // lwz @ 0x806F5BE4
    FUN_805E3430(r4); // bl 0x805E3430
    if (!=) goto 0x0x806f605c;
    /* li r0, 0 */ // 0x806F5BF4
}
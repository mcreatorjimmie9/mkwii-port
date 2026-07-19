/* Function at 0x808418F8, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808418F8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80841904
    r31 = r3;
    r4 = *(0x18 + r3); // lwz @ 0x8084190C
    if (<=) goto 0x0x8084197c;
    r0 = r4 + -1; // 0x80841918
    *(0x18 + r3) = r0; // stw @ 0x8084191C
    if (==) goto 0x0x80841938;
    if (==) goto 0x0x80841938;
    if (!=) goto 0x0x8084197c;
    r3 = r31;
    FUN_808417B0(r3); // bl 0x808417B0
    r0 = *(8 + r31); // lwz @ 0x80841940
    if (!=) goto 0x0x8084197c;
    /* li r0, 0 */ // 0x8084194C
    /* li r3, 0x14 */ // 0x80841950
    *(4 + r31) = r3; // stw @ 0x80841954
    *(8 + r31) = r0; // stw @ 0x80841958
    *(0x29 + r31) = r0; // stb @ 0x8084195C
    *(0x18 + r31) = r0; // stw @ 0x80841960
    *(0xc + r31) = r0; // stw @ 0x80841964
    *(0x10 + r31) = r0; // stw @ 0x80841968
    *(0x14 + r31) = r0; // stw @ 0x8084196C
    *(0x1c + r31) = r0; // stb @ 0x80841970
    *(0x20 + r31) = r0; // stw @ 0x80841974
    *(0x24 + r31) = r0; // stw @ 0x80841978
    r0 = *(0x14 + r1); // lwz @ 0x8084197C
    r31 = *(0xc + r1); // lwz @ 0x80841980
    return;
}
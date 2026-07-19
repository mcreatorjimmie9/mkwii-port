/* Function at 0x8086D80C, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8086D80C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x8086D814
    /* li r0, 0xc */ // 0x8086D81C
    *(0x1c + r1) = r31; // stw @ 0x8086D820
    *(0x18 + r1) = r30; // stw @ 0x8086D824
    /* li r30, 0 */ // 0x8086D828
    *(0x14 + r1) = r29; // stw @ 0x8086D82C
    r29 = r3;
    r31 = r29;
    *(0 + r3) = r4; // stw @ 0x8086D838
    /* lis r4, 0 */ // 0x8086D83C
    *(8 + r3) = r0; // stb @ 0x8086D840
    r4 = *(0 + r4); // lwz @ 0x8086D844
    r0 = *(0x25 + r4); // lbz @ 0x8086D848
    *(4 + r3) = r0; // stw @ 0x8086D84C
    /* b 0x8086d878 */ // 0x8086D850
    /* li r3, 0x10 */ // 0x8086D854
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8086d86c;
    r4 = r30;
    FUN_8086E034(r3, r4); // bl 0x8086E034
    *(0x18 + r31) = r3; // stw @ 0x8086D86C
    r31 = r31 + 4; // 0x8086D870
    r30 = r30 + 1; // 0x8086D874
    r0 = *(4 + r29); // lwz @ 0x8086D878
    if (<) goto 0x0x8086d854;
    r31 = *(0x1c + r1); // lwz @ 0x8086D884
}
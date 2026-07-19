/* Function at 0x806F5920, size=204 bytes */
/* Stack frame: 480 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806F5920(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -480(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x806F5928
    *(0x1dc + r1) = r31; // stw @ 0x806F5930
    *(0x1d8 + r1) = r30; // stw @ 0x806F5934
    r6 = *(0 + r4); // lwz @ 0x806F5938
    r0 = *(0x36 + r6); // lha @ 0x806F593C
    if (<) goto 0x0x806f5964;
    /* lis r4, 1 */ // 0x806F5948
    /* clrlwi r5, r0, 0x18 */ // 0x806F594C
    r0 = r4 + -0x6c10; // 0x806F5950
    r0 = r0 * r5; // 0x806F5954
    r4 = r6 + r0; // 0x806F5958
    r31 = r4 + 0x38; // 0x806F595C
    /* b 0x806f5968 */ // 0x806F5960
    /* li r31, 0 */ // 0x806F5964
    /* addis r4, r3, 1 */ // 0x806F5968
    r0 = *(-0x7648 + r4); // lwz @ 0x806F596C
    /* xori r0, r0, 3 */ // 0x806F5970
    r4 = r0 >> 1; // srawi
    /* clrlwi r0, r0, 0x1e */ // 0x806F5978
    /* subf r0, r0, r4 */ // 0x806F597C
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x806F5980
    if (==) goto 0x0x806f5998;
    r3 = *(0x7a08 + r3); // lwz @ 0x806F5988
    /* neg r0, r3 */ // 0x806F598C
    /* andc r0, r0, r3 */ // 0x806F5990
    /* srwi r0, r0, 0x1f */ // 0x806F5994
    if (==) goto 0x0x806f59b8;
    /* addis r3, r31, 1 */ // 0x806F59A0
    r3 = r3 + -0x7048; // 0x806F59A4
    FUN_805E3430(r3); // bl 0x805E3430
    /* neg r0, r3 */ // 0x806F59AC
    r0 = r0 | r3; // 0x806F59B0
    /* srwi r0, r0, 0x1f */ // 0x806F59B4
    if (==) goto 0x0x806f5a18;
    /* lis r4, 0 */ // 0x806F59C0
    r4 = r4 + 0; // 0x806F59C8
    *(8 + r1) = r4; // stw @ 0x806F59CC
    /* li r4, 0 */ // 0x806F59D0
    /* li r5, 0x1c0 */ // 0x806F59D4
    FUN_805E3430(r3, r4, r4, r5); // bl 0x805E3430
    /* li r30, 0 */ // 0x806F59DC
    /* clrlwi r0, r30, 0x10 */ // 0x806F59E0
    /* mulli r0, r0, 0x1c0 */ // 0x806F59E8
}
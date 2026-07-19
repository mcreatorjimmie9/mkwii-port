/* Function at 0x806FA130, size=228 bytes */
/* Stack frame: 544 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806FA130(int r3, int r4)
{
    /* Stack frame: -544(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x218 + r1) = r30; // stw @ 0x806FA144
    *(0x214 + r1) = r29; // stw @ 0x806FA148
    r0 = *(0x20 + r3); // lbz @ 0x806FA14C
    if (!=) goto 0x0x806fa19c;
    /* li r0, 0 */ // 0x806FA158
    *(0x1c + r3) = r0; // stw @ 0x806FA15C
    r3 = *(0x758c + r3); // lwz @ 0x806FA160
    r12 = *(0x18 + r3); // lwz @ 0x806FA164
    r12 = *(0xc + r12); // lwz @ 0x806FA168
    /* mtctr r12 */ // 0x806FA16C
    /* bctrl  */ // 0x806FA170
    if (!=) goto 0x0x806fa188;
    /* li r0, 1 */ // 0x806FA17C
    *(0x20 + r31) = r0; // stb @ 0x806FA180
    /* b 0x806fa19c */ // 0x806FA184
    r3 = *(0x758c + r31); // lwz @ 0x806FA188
    r0 = *(4 + r3); // lwz @ 0x806FA18C
    *(0x1c + r31) = r0; // stw @ 0x806FA190
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x806fa1a0 */ // 0x806FA198
    /* li r3, 0 */ // 0x806FA19C
    if (==) goto 0x0x806fa1b8;
    /* li r0, 6 */ // 0x806FA1A8
    *(0x757c + r31) = r3; // stw @ 0x806FA1AC
    *(0x14 + r31) = r0; // stw @ 0x806FA1B0
    /* b 0x806fa3b4 */ // 0x806FA1B4
    /* li r3, 2 */ // 0x806FA1B8
    FUN_805E3430(r3); // bl 0x805E3430
    r30 = r3;
    if (==) goto 0x0x806fa1f0;
    FUN_805E3430(r3); // bl 0x805E3430
    *(0x1c + r31) = r3; // stw @ 0x806FA1D4
    if (!=) goto 0x0x806fa1e4;
    /* li r3, 8 */ // 0x806FA1DC
    /* b 0x806fa1f4 */ // 0x806FA1E0
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    /* b 0x806fa1f4 */ // 0x806FA1EC
    /* li r3, 0 */ // 0x806FA1F0
    if (==) goto 0x0x806fa20c;
    /* li r0, 6 */ // 0x806FA1FC
    *(0x757c + r31) = r3; // stw @ 0x806FA200
    *(0x14 + r31) = r0; // stw @ 0x806FA204
    /* b 0x806fa3b4 */ // 0x806FA208
    r3 = r31 + 0x24; // 0x806FA20C
}
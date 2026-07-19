/* Function at 0x805E5000, size=676 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805E5000(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x805E5014
    *(0x14 + r1) = r29; // stw @ 0x805E5018
    r29 = r3;
    if (==) goto 0x0x805e502c;
    if (<=) goto 0x0x805e5034;
    /* li r3, 0 */ // 0x805E502C
    /* b 0x805e5288 */ // 0x805E5030
    r31 = r4;
    /* li r30, 0 */ // 0x805E503C
    if (==) goto 0x0x805e5048;
    /* li r31, 3 */ // 0x805E5044
    if (!=) goto 0x0x805e51bc;
    /* lis r3, 0 */ // 0x805E5050
    r5 = *(0 + r3); // lwz @ 0x805E5054
    r0 = *(0x36 + r5); // lha @ 0x805E5058
    if (<) goto 0x0x805e5080;
    /* lis r3, 1 */ // 0x805E5064
    /* clrlwi r4, r0, 0x18 */ // 0x805E5068
    r0 = r3 + -0x6c10; // 0x805E506C
    r0 = r0 * r4; // 0x805E5070
    r3 = r5 + r0; // 0x805E5074
    r3 = r3 + 0x38; // 0x805E5078
    /* b 0x805e5084 */ // 0x805E507C
    /* li r3, 0 */ // 0x805E5080
    /* addis r3, r3, 1 */ // 0x805E5084
    /* li r4, 0x38 */ // 0x805E5088
    r3 = r3 + -0x7008; // 0x805E508C
    FUN_805D84B0(r3, r4, r3); // bl 0x805D84B0
    if (==) goto 0x0x805e50b4;
    if (==) goto 0x0x805e50ac;
    if (!=) goto 0x0x805e51bc;
    /* li r30, 2 */ // 0x805E50AC
    /* b 0x805e51bc */ // 0x805E50B0
    /* lis r4, 0 */ // 0x805E50B4
    /* lis r3, 1 */ // 0x805E50B8
    r8 = *(0 + r4); // lwz @ 0x805E50BC
    r7 = r3 + -0x6c10; // 0x805E50C0
    /* li r9, 0 */ // 0x805E50C4
    /* li r10, 0 */ // 0x805E50C8
    /* li r3, 0 */ // 0x805E50CC
    /* li r0, 2 */ // 0x805E50D0
    /* li r11, 0 */ // 0x805E50D4
    /* li r4, 0 */ // 0x805E50D8
    /* mtctr r0 */ // 0x805E50DC
    r5 = *(0x36 + r8); // lha @ 0x805E50E0
    if (<) goto 0x0x805e5100;
    /* clrlwi r5, r5, 0x18 */ // 0x805E50EC
    r5 = r7 * r5; // 0x805E50F0
    r5 = r8 + r5; // 0x805E50F4
    r5 = r5 + 0x38; // 0x805E50F8
    /* b 0x805e5104 */ // 0x805E50FC
    /* li r5, 0 */ // 0x805E5100
    r5 = r5 + r4; // 0x805E5104
    r6 = r5 + r3; // 0x805E5108
    r5 = *(0x76 + r6); // lbz @ 0x805E510C
    if (==) goto 0x0x805e5120;
    r5 = *(0x84 + r6); // lwz @ 0x805E5118
    /* b 0x805e5124 */ // 0x805E511C
    /* li r5, 3 */ // 0x805E5120
    if (==) goto 0x0x805e5134;
    /* li r9, 1 */ // 0x805E512C
    /* b 0x805e5198 */ // 0x805E5130
    r5 = *(0x36 + r8); // lha @ 0x805E5134
    r4 = r4 + 0x380; // 0x805E5138
    if (<) goto 0x0x805e5158;
    /* clrlwi r5, r5, 0x18 */ // 0x805E5144
    r5 = r7 * r5; // 0x805E5148
    r5 = r8 + r5; // 0x805E514C
    r5 = r5 + 0x38; // 0x805E5150
    /* b 0x805e515c */ // 0x805E5154
    /* li r5, 0 */ // 0x805E5158
    r5 = r5 + r4; // 0x805E515C
    r6 = r5 + r3; // 0x805E5160
    r5 = *(0x76 + r6); // lbz @ 0x805E5164
    if (==) goto 0x0x805e5178;
    r5 = *(0x84 + r6); // lwz @ 0x805E5170
    /* b 0x805e517c */ // 0x805E5174
    /* li r5, 3 */ // 0x805E5178
    if (==) goto 0x0x805e518c;
    /* li r9, 1 */ // 0x805E5184
    /* b 0x805e5198 */ // 0x805E5188
    r4 = r4 + 0x380; // 0x805E5190
    if (counter-- != 0) goto 0x0x805e50e0;
    if (!=) goto 0x0x805e51b0;
    r3 = r3 + 0x70; // 0x805E51A4
    if (<) goto 0x0x805e50d4;
    if (!=) goto 0x0x805e51bc;
    /* li r30, 2 */ // 0x805E51B8
    if (!=) goto 0x0x805e5284;
    if (==) goto 0x0x805e51d4;
    if (!=) goto 0x0x805e5284;
    /* lis r3, 0 */ // 0x805E51D4
    r7 = *(0 + r3); // lwz @ 0x805E51D8
    r5 = *(0x36 + r7); // lha @ 0x805E51DC
    if (<) goto 0x0x805e5204;
    /* lis r3, 1 */ // 0x805E51E8
    /* clrlwi r4, r5, 0x18 */ // 0x805E51EC
    r0 = r3 + -0x6c10; // 0x805E51F0
    r0 = r0 * r4; // 0x805E51F4
    r3 = r7 + r0; // 0x805E51F8
    r0 = r3 + 0x38; // 0x805E51FC
    /* b 0x805e5208 */ // 0x805E5200
    /* li r0, 0 */ // 0x805E5204
    /* mulli r6, r31, 0x380 */ // 0x805E5208
    r3 = r0 + r6; // 0x805E520C
    r0 = *(0x1c6 + r3); // lbz @ 0x805E5210
    if (==) goto 0x0x805e5224;
    r0 = *(0x1d4 + r3); // lwz @ 0x805E521C
    /* b 0x805e5228 */ // 0x805E5220
    /* li r0, 3 */ // 0x805E5224
    if (==) goto 0x0x805e5284;
    if (<) goto 0x0x805e5258;
    r4 = *(0x36 + r7); // lha @ 0x805E5238
    /* lis r3, 1 */ // 0x805E523C
    r0 = r3 + -0x6c10; // 0x805E5240
    /* clrlwi r3, r4, 0x18 */ // 0x805E5244
    r0 = r0 * r3; // 0x805E5248
    r3 = r7 + r0; // 0x805E524C
    r0 = r3 + 0x38; // 0x805E5250
    /* b 0x805e525c */ // 0x805E5254
    /* li r0, 0 */ // 0x805E5258
    r3 = r0 + r6; // 0x805E525C
    r0 = *(0x386 + r3); // lbz @ 0x805E5260
    if (==) goto 0x0x805e5274;
    r0 = *(0x394 + r3); // lwz @ 0x805E526C
    /* b 0x805e5278 */ // 0x805E5270
    /* li r0, 3 */ // 0x805E5274
    if (==) goto 0x0x805e5284;
    /* li r30, 1 */ // 0x805E5280
    r3 = r30;
    r0 = *(0x24 + r1); // lwz @ 0x805E5288
    r31 = *(0x1c + r1); // lwz @ 0x805E528C
    r30 = *(0x18 + r1); // lwz @ 0x805E5290
    r29 = *(0x14 + r1); // lwz @ 0x805E5294
    return;
}
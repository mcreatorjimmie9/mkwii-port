# Task: Wire CourseColManager and KCollision into Race Init + Per-Frame Loop

## Summary

Successfully implemented all 3 critical changes to wire the KCL collision system into the race initialization and update loop. Build completes with 0 errors.

## Changes Made

### Change 1: Wire CourseColManager to load KCL data from TrackManager (SceneRace.cpp)

**Files modified:**
- `data/src/game/Scene/SceneRace.cpp` — Added include for real CourseColManager via relative path `../Field/CourseColManager.hpp`, and wired KCL data loading in `loadCourse()` after track load succeeds.
- `src/loaders/track_manager.hpp` — Added `getKCLRawData()` accessor method that returns the raw KCL binary data from the internal KclLoader.

**Details:**
After the TrackManager successfully loads and parses the SZS archive, `loadCourse()` now extracts the raw KCL binary data via `getKCLRawData()` and passes it to `Field::CourseColManager::instance()->load(data, size)`. This triggers the real KCL parser (KCollision::loadKCL) which builds the octree spatial index for fast collision queries. A printf reports the loaded triangle count.

### Change 2: Fix Course::getHeightAt() to use CourseColManager (Course.cpp)

**Files modified:**
- `data/src/game/Scene/Course.cpp` — Added `#include "../Field/CourseColManager.hpp"` and replaced the stub `getHeightAt()` with a real implementation that delegates to CourseColManager's KCL octree ray-triangle intersection.

**Details:**
The previous implementation had a comment block describing what a KCL raycast would do but fell through to sector-based lookup. Now it calls `CourseColManager::instance()->getFloorAt(x, rayStartY, z)` which performs a real downward raycast through the KCL octree, finding the highest floor triangle below the query point. Falls back to `getHeight(x, z)` (sector-based) when CourseColManager has no data loaded.

### Change 3: Implement CourseModel::checkSphereCachedPartial() (CourseModel.hpp stub)

**Files modified:**
- `src/modules/game/field/CourseModel.hpp` — Replaced stub (always returns false) with real implementation that delegates to CourseColManager::instance()->checkSphereFiltered().
- `src/modules/game/field/CourseColManager.hpp` — Updated stub to declare `instance()`, `isLoaded()`, and `checkSphereFiltered()` methods (matching the real CourseColManager interface) so the CourseModel stub can call them. Added `SphereColResult` struct matching the real KCollision layout.

**Details:**
The `checkSphereCachedPartial()` function now:
1. Gets the CourseColManager singleton
2. Checks if KCL data is loaded
3. Calls `checkSphereFiltered(pos, radius, typeMask, &result)` for a KCL octree sphere test
4. If collision found, fills `ColInfoPartial.bboxLow` with the collision normal and `bboxHigh` with the push-out displacement vector
5. Returns true/false indicating collision

This is the critical bridge function called by `KartCollide::checkNeighborhood()` during per-frame wall collision detection.

## Build Result
- **0 errors, 0 warnings** (relevant to changed files)
- All 3 targets built successfully: `mkwii-genesis` (static lib), `mkwii-port` (executable), `mkwii-loaders` (static lib)
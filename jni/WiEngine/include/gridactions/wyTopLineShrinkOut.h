/*
 * Copyright (c) 2010 WiYun Inc.
 * Author: luma(stubma@gmail.com)
 *
 * For all entities this program is free software; you can redistribute
 * it and/or modify it under the terms of the 'WiEngine' license with
 * the additional provision that 'WiEngine' must be credited in a manner
 * that can be be observed by end users, for example, in the credits or during
 * start up. (please find WiEngine logo in sdk's logo folder)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef __wyTopLineShrinkOut_h__
#define __wyTopLineShrinkOut_h__

#include "wyTiledGrid3DAction.h"
#include "wyTypes.h"

/**
 * @class wyTopLineShrinkOut
 * Node performing this action will be divided into rows, and will disappear in rows
 * one by one, from top to bottom, looks like the node shrinks from the top.
 */
class WIENGINE_API wyTopLineShrinkOut : public wyTiledGrid3DAction {
private:
	float tileTest(wyDimension pos, float time);
	void turnOnTile(wyDimension pos);
	void turnOffTile(wyDimension pos);
	void transformTile(wyDimension pos, float distance);

public:
	/**
	 * factory function, used to create a new instance with autoRelease enabled
	 *
	 * @param duration time, in seconds
	 * @param gridX row count
	 * @param gridY column count
	 */
	static wyTopLineShrinkOut* make(float duration, int gridX, int gridY);

	/**
	 * constructor
	 *
	 * @param duration time, in seconds
	 * @param gridX row count
	 * @param gridY column count
	 */
	wyTopLineShrinkOut(float duration, int gridX, int gridY);

	/**
	 * destructor
	 */
	virtual ~wyTopLineShrinkOut();

	/// @see wyAction::copy
	virtual wyAction* copy();

	/// @see wyAction::copy
	virtual void update(float t);
};

#endif // __wyTopLineShrinkOut_h__

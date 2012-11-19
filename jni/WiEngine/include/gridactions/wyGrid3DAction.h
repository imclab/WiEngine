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
#ifndef __wyGrid3DAction_h__
#define __wyGrid3DAction_h__

#include "wyGridAction.h"
#include "wyTypes.h"

/**
 * @class wyGrid3DAction
 * base class of classes which use grid of \link wyGrid3D wyGrid3D\endlink to implement a specific effect,
 * such as \link wyLens3D wyLens3D\endlink
 */
class WIENGINE_API wyGrid3DAction : public wyGridAction {
public:
	/**
	 * constructor
	 *
	 * @param duration time, in seconds
	 * @param gridX row count
	 * @param gridY column count
	 */
	wyGrid3DAction(float duration, float gridX, float gridY);

	/**
	 * destructor
	 */
	virtual ~wyGrid3DAction();

	/// @see wyGridAction::makeGrid
	virtual wyGridController* makeGrid();

	/// @see wyGridAction::getGridClass
	virtual bool isGridReusable(wyGridController* grid);

	/**
	 * get the vertex information of a target grid unit
	 *
	 * @param pos target grid unit's coordinates.
	 */
	wyVertex3D getVertex(wyDimension pos);

	/**
	 * get the original vertex information of a target grid unit
	 *
	 * @param pos target grid unit's coordinates.
	 */
	wyVertex3D getOriginalVertex(wyDimension pos);

	/**
	 * set the vertex of a target grid unit
	 * @param pos the target grid unit's coordinates
	 * @param vertex the new vertex of the target grid unit \link wyVertex3D wyVertex3D\endlink
	 */
	void setVertex(wyDimension pos, wyVertex3D vertex);
};

#endif // __wyGrid3DAction_h__
